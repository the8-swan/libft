/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:54:22 by obakri            #+#    #+#             */
/*   Updated: 2025/10/16 11:07:06 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void *ft_calloc(size_t num, size_t size)
{
	size_t	i;
	unsigned char 	*ptr;

	i = 0;
	if(num == 0 || size ==0)
	{
		ptr = malloc(1);
		if(!ptr)
			return (NULL);
		return (ptr);
	}
	ptr = malloc(num*size);
	if(!ptr)
		return (NULL);
	while(i < num*size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void*)ptr);
}
