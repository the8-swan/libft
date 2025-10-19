/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:24:46 by obakri            #+#    #+#             */
/*   Updated: 2025/10/15 18:48:22 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if(n == 0 || s1 == s2)
		return 0;
	while(i < n){
		if(((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
		i++;
	}

	return 0;

}
