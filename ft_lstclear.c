#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		n = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(n, del);
	}
}