#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    char c;
    struct s_list *next;
}
t_list;

void ft_lstadd_back(t_list **lst, t_list *new);

int main(void)
{
    t_list *list = malloc(sizeof(t_list));
    if (list == NULL)
        return (1);
    t_list *n = list;

    for (int i = 0; i < 5; i++)
    {
        n->c = 'a' + i;
        if (i < 4)
        {
            n->next = malloc(sizeof(t_list));
            if (n->next == NULL)
                return (1);
            n = n->next;
        }
    }
    t_list *new = malloc(sizeof(t_list));
    if (new == NULL)
        return (1);
    new->c = 'z';
    ft_lstadd_back(&list, new);

    for (t_list *x = list; x != NULL; x = x->next)
    {
        printf("%c\n", x->c);
    }
}