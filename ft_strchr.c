/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:49:37 by obakri            #+#    #+#             */
/*   Updated: 2025/10/15 18:07:16 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
	while(*str)
	{
		if(*str == ch)
			return ((char*) str);
		if(*(str+1) == ch)
			return ((char*) str+1);
		str++;
	}
	return (NULL);
}

