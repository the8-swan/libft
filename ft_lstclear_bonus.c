/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:53:33 by obakri            #+#    #+#             */
/*   Updated: 2025/10/27 11:08:56 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		node = (*lst)-> next;
		ft_lstdelone((*lst), del);
		(*lst) = node;
	}
	*lst = NULL;
}
