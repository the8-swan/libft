/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:00:50 by obakri            #+#    #+#             */
/*   Updated: 2025/10/14 15:13:43 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;

	i = 0;
	while(i<num)
		((unsigned char*)ptr)[i++]= (unsigned char) value;
	return (ptr);
}
