/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:48:04 by obakri            #+#    #+#             */
/*   Updated: 2025/10/22 14:26:11 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;
	if(!lst || !new)
		return;
	node = ft_lstlast(*lst);
	if(!node)
		return;
	node -> next = new;
	
}
