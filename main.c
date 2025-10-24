/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:24 by obakri            #+#    #+#             */
/*   Updated: 2025/10/23 18:46:59 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	MyUpper(void	*content)
{
	size_t	index;

	index =0;
	while(((unsigned char*)content)[index]){
		if(((unsigned char*)content)[index] == 'o')
			((unsigned char*)content)[index] += 32;
		index++;
	}
}


int main()
{
	t_list *node1 = ft_lstnew("node 1");
	t_list **pointer;
	pointer = &node1;
	t_list *node2 = ft_lstnew("node 2");
	node1 ->next =node2;
	t_list *node3 = ft_lstnew("node 3");
	node2 -> next = node3;
	t_list *node0 = ft_lstnew("node 0");
	ft_lstadd_front(pointer,node0);
	while(*pointer){
		printf("%s\n",(char *)(*pointer)->content);
		(*pointer) = (*pointer)->next;
	}
//	ft_lstclear(pointer,i);
	ft_lstiter(node1,MyUpper);	
	 while(*pointer)
	 {
                   printf("%s\n",(char *)(*pointer)->content);
                   (*pointer) = (*pointer)->next;
          } 
	return 0;
}
 
