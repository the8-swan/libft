/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:34:33 by obakri            #+#    #+#             */
/*   Updated: 2025/10/27 23:18:22 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calcdigits(long n, int *arr)
{
	int	digits;
	int	i;

	digits = 0;
	i = 0;
	while (n >= 0)
	{
		arr[i++] = n % 10;
		n /= 10;
		digits++;
		if (n == 0)
			break ;
	}
	return (digits);
}

static void	ft_allocate(char *ptr, int sign, int *arr, int digits)
{
	int	i;

	i = 0;
	if (sign)
		ptr[i++] = '-';
	while (digits >= 0)
		ptr[i++] = arr[digits--] + '0';
	ptr[i] = '\0';
}

char	*ft_itoa(int n)
{
	long		number;
	int			digits;
	int			sign;
	char		*ptr;
	int			arr[10];

	number = n;
	digits = 0;
	sign = 0;
	if (number < 0)
	{
		number = -number;
		sign = 1;
	}
	digits = ft_calcdigits(number, arr);
	ptr = malloc(sizeof(char) * (digits + 1 + sign));
	if (!ptr)
		return (NULL);
	ft_allocate(ptr, sign, arr, digits - 1);
	return (ptr);
}
