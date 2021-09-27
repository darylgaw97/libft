#include "libft.h"
#include <stdio.h>

void f(void *content)
{
    *(char *)content = *(char *)content + 1;
}

int main(void)
{
    t_list *list = malloc(sizeof(t_list));
    t_list *n = list;

    for (int i = 0; i < 5; i++)
    {
        char *str = malloc(2);
        str[0] = 'a' + i;
        n->content = str;
        if (i < 4)
        {
            n->next = malloc(sizeof(t_list));
            n = n->next;
        }
    }

    for (t_list *x = list; x != NULL; x = x->next)
    {
        printf("%c\n", *(char *)x->content);
    }
    printf("//////////////////////\n\n");
    ft_lstiter(list, f);

    for (t_list *x = list; x != NULL; x = x->next)
    {
        printf("%c\n", *(char *)x->content);
    }
}