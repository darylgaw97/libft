#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *n;

    if(lst == NULL || f == NULL || del == NULL)
        return (NULL);
    n = lst;
    while (n)
    {
        n->content = f(n->content);
        del(n->content);
        n = n->next;
    }
    return (lst);
}