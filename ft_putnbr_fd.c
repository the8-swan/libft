/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:06:23 by obakri            #+#    #+#             */
/*   Updated: 2025/10/27 23:08:10 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	digits[10];
	long	number;

	i = 0;
	if (fd < 0)
		return ;
	number = n;
	if (n < 0)
	{
		number = -number;
		write(fd, "-", 1);
	}
	while (number >= 0)
	{
		digits[i++] = (number % 10) + '0';
		number /= 10;
		if (number == 0)
			break;
	}
	while (i > 0)
		write(fd, &digits[--i], 1);
}
