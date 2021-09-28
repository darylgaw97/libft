#include <stdio.h>
#include "libft.h"

int main(void)
{
    t_list *list = malloc(sizeof(t_list));
    t_list * n = list;

    printf("&list: %p\n\n", &list);
    for (int i = 0; i < 5; i++)
    {
        if (i < 4)
        {
            n->next = malloc(sizeof(t_list));
            n = n->next;
        }
    }

    for (t_list *x = list; x != NULL; x = x->next)
        printf("%p\n", x);
    printf("///////////////////////////\n\n");
    ft_lstclear(&list, del);
    list = NULL;
    printf("&list: %p\n\n", &list);
    for (t_list *x = list; x != NULL; x = x->next)
        printf("%p\n", x);
}
