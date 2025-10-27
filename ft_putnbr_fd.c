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
	char	*ptr;
	size_t	size;

	size = 0;
	if (fd < 0)
		return ;
	ptr = ft_itoa(n);
	size = ft_strlen(ptr);
	write(fd, ptr, size);
}
