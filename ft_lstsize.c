/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:52:27 by obakri            #+#    #+#             */
/*   Updated: 2025/10/22 10:56:33 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if(!lst)
		return (0);
	while(lst)
	{
		size+=1;
		lst = lst ->next;
		
	}
	return (size);
}
