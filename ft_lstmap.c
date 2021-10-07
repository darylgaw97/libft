#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *ret;

    ret = malloc(sizeof(t_list));
    if (lst == NULL || f == NULL || del == NULL || ret == NULL)
        return (NULL);
    while (lst)
    {
        ret->content = f(lst->content);
        if (!(ret->next = malloc(sizeof(t_list))))
            return (NULL);
        ret = ret->next;
    }
    return (ret);
}