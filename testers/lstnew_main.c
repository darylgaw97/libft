#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}
t_list;

t_list *ft_lstnew(void *content);

int main(void)
{
    int c = 12345;
    t_list *list = ft_lstnew(&c);
    printf("%i\n", *(int *)list->content);
}

/*
    Typedef means giving a variable type(which already exist) an alias, basically just giving it another name.
    struct on the other hand creates a new type of variable.
    typedef struct can be used to create a new type of variable then at the same time giving it a new name to be used later on
*/