/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:11:49 by obakri            #+#    #+#             */
/*   Updated: 2025/10/20 18:02:06 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	char*	ptr;
	size_t	size;
	
	i = 0;
	size = 0;
	if(fd < 0)
		return;
	ptr = ft_itoa(n);
	size = ft_strlen(ptr);
	write(fd,ptr,size);

}
