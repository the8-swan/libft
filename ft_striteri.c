/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:44:29 by obakri            #+#    #+#             */
/*   Updated: 2025/10/19 12:25:13 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	size_t	i;

	i = 0;
	if(s == NULL || f == NULL)
		return;
	while(s[i])
	{
		f(i,&s[i]);
		i++;
	}	
}

