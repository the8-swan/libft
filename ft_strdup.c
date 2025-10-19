/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:42:48 by obakri            #+#    #+#             */
/*   Updated: 2025/10/16 11:52:58 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	i;
	size_t slen;
	char* ptr;

	slen = ft_strlen(s);
	i = 0;
	ptr = malloc((slen + 1 ) * sizeof(char));
	if(!ptr)
		return (NULL);
	while(s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr); 

}
