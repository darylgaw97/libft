#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    char c;
    struct s_list *next;
}
t_list;

t_list *ft_lstlast(t_list *lst);

int main(void)
{
    t_list *list = malloc(sizeof(t_list));
    t_list *n = list;

    if (list == NULL)
        return (1);
    for (int i = 0; i < 10; i++)
    {
        n->c = 'a' + i;
        if (i != 9)
        {
            n->next = malloc(sizeof(t_list));
            if (n->next == NULL)
                return (1);
        }
        n = n->next;
    }
    printf("%c\n", (ft_lstlast(list))->c);
}
