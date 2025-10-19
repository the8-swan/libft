/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:09:03 by obakri            #+#    #+#             */
/*   Updated: 2025/10/16 11:53:46 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	i;
	size_t	slen;
	char*	ptr;

	i = 0;
	slen = ft_strlen(s);
	if(s == NULL)
		return (NULL);
	if(start > slen)
		len = 0;
	ptr = malloc((len +1) *sizeof(char));
	if(!ptr)
		return (NULL);
	while(i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
