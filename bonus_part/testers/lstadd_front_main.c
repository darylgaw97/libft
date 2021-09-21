#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    char c;
    struct s_list *next;
}
t_list;

void ft_lstadd_front(t_list **lst, t_list *new);

int main(void)
{
    t_list *list;
    t_list *alpha;
    t_list *n;
    
    list = malloc(sizeof(t_list));
    if (list == NULL)
        return (1);
    alpha = list;
    n = malloc(sizeof(t_list));
    if (n == NULL)
        return (1);
    
    for (int  i = 0; i < 10; i++)
    {
        alpha->c = 'a' + i;
        alpha->next = malloc(sizeof(t_list));
        alpha = alpha->next;
    }
    
    printf("Before:\n");
    for (alpha = list; alpha->next; alpha = alpha->next)
    {
        printf("%c\n", alpha->c);
    }
    
    n->c = 'z';
    ft_lstadd_front(&list, n);
    
    printf("\nAfter:\n");
    for (alpha = list; alpha->next; alpha = alpha->next)
    {
        printf("%c\n", alpha->c);
    }
}