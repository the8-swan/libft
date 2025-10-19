/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:01:25 by obakri            #+#    #+#             */
/*   Updated: 2025/10/15 10:19:20 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char* ft_strrchr(char* str,int ch)
{
	long	length;

	length = ft_strlen(str);
	while(length >= 0)
	{
		if(str[length] == ch)
			return (&str[length]);
		length--;
	}
	return (NULL);
}
