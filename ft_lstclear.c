#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		n = *lst;
		ft_lstdelone(n, del);
		*lst = (*lst)->next;
	}
}
