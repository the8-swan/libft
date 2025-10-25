
#include "libft.h"
#include <stdio.h>

void freecontent(void* content){
    content = NULL;
}
int main(){
    t_list *node1 = ft_lstnew("node1");
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
    t_list *test =node4;
    ft_lstdelone(node4,freecontent);
    current = head;
    while(current != test){
        printf("%s\n",(char *)current->content);
        current = current->next;
    }

    ft_lstclear(&head,freecontent);
    printf("%p",head);

    return 0;
}