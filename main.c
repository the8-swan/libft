/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obakri <obakri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:02:43 by obakri            #+#    #+#             */
/*   Updated: 2025/10/27 23:15:11 by obakri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
/*
void freecontent(void* content){
    content = NULL;
}
*/
void	*Mylower(void	*content)
{
	int	idx = 0;
	int	len = ft_strlen((char*)content);
	char	*lower = (char*) malloc(len + 1);
	while (idx < len)
	{
		lower[idx] = tolower(((char *)content)[idx]);
		idx++;
	}
	lower[idx] = '\0';
	return lower; 
}
int main(){
    t_list *node1 = ft_lstnew("EYOOOO");
    t_list *head = node1;
    t_list *node2 = ft_lstnew("node2");
    t_list *node3 = ft_lstnew("node3");
    t_list *node4 = ft_lstnew("node4");
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    t_list *current = head;
    while(current){
        printf("%s\n",(char *)current->content);
        current = current->next;
    }

/*
    current = ft_lstmap(head ,Mylower, freecontent);
	printf("******** after ft_lstmap*******\n");
    while(current){
        printf("%s\n",(char *)current->content);
        current = current->next;
    }
*/
    return 0;
}

