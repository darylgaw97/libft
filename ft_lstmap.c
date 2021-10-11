#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *n;
    
    new = NULL;
    while (lst)
    {
        n = ft_lstnew((*f)(lst->content));
        if (n == NULL)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, n);
        lst = lst->next;
    }
    return (new);
}