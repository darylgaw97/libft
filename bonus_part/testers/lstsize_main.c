#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    char c;
    struct s_list *next;
}
t_list;

int ft_lstsize(t_list *lst);

int main(void)
{
    t_list *list;
    t_list *n;

    if (!(list = malloc(sizeof(t_list))))
        return (1);
    n = list;

    printf("Before:\n%i\n\n", ft_lstsize(list));

    for (int i = 0; i < 3; i++)
    {
        n->c = 'a' + i;
        if(i != 3 - 1)          // this is to prevent the loop from mallocing an extra node at the last iteration
        {
            if(!(n->next = malloc(sizeof(t_list))))
                return (1);
            n = n->next;
        }
    }
    printf("After:\n%i\n", ft_lstsize(list));
}