#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *n;

    if (lst == NULL || new == NULL)
        return ;
    n = *lst;
    while (n->next)
        n = n->next;
    n->next = new;
}