/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:37:34 by obakri            #+#    #+#             */
/*   Updated: 2025/10/19 09:44:17 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slength;
	size_t	i;
	char* ptr;

	slength = 0;
	i = 0;
	if(s == NULL || f == NULL)
		return (NULL);
	slength = ft_strlen(s);
	ptr = malloc(sizeof(char) * (slength+1));
	if(!ptr)
		return (NULL);
	while(s[i]){
		ptr[i] = f(i,s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}
