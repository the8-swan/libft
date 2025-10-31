/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:45:25 by obakri            #+#    #+#             */
/*   Updated: 2025/10/30 19:06:04 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (str)
	{
		while (*str)
		{
			if (*str == (char)c)
				return ((char *) str);
			if (*(str + 1) == (char)c)
				return ((char *) str + 1);
			str++;
		}
		if (!c)
			return ((char *)str);
	}
	return (NULL);
}
