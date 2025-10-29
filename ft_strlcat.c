/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:13:54 by obakri            #+#    #+#             */
/*   Updated: 2025/10/27 23:09:12 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;
	size_t	j;
	
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= dstsize)
		return (lensrc + dstsize);
	i = 0;
	j = lendst;
	while (src[i] && (1 + i + lendst) < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (lensrc + lendst);
}