/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:53:30 by obakri            #+#    #+#             */
/*   Updated: 2025/10/23 14:34:03 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if(!del || !(*del) || !lst || !(*lst))
		return;
	while(*lst){
		ft_lstdelone(lst,del);
		(*lst) = (*lst)->next;
	}

}
