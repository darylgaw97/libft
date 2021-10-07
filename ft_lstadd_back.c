#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *n;

    if (lst == NULL || new == NULL)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    n = *lst;
    while (n->next)
        n = n->next;
    n->next = new;
}

/*
    if lst == NULL, it means that the linked list does not exist,
    if lst != NULL but *lst == NULL, it means the linked list exist but its empty,
    in that case add the new list as the first element of the linked list.      
*/