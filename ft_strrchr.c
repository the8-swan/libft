/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:59:22 by obakri            #+#    #+#             */
/*   Updated: 2025/10/25 01:13:01 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	length;

	if (str)
	{
		length = ft_strlen(str);
		while (length + 1 >= 1)
		{
			if (str[length] == (char)c)
				return (&((char *)str)[length]);
			length--;
		}
	}
	return (NULL);
}
