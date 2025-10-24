/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:50:48 by obakri            #+#    #+#             */
/*   Updated: 2025/10/22 09:59:14 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstnew(void *content){
	t_list	*node;

	node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
	node -> content = content ;
	node -> next = NULL;
	return (node);

}
