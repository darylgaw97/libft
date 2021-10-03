#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[5];

    for (int i = 0; i < 5; i++)
        str[i] = i + 'a';
    printf("strings\n");
    printf("before:\n");
    for (int i = 0; i < 5; i++)
        printf("%c\n", str[i]);
    ft_bzero(str, sizeof(*str) * 5);
    printf("after:\n");
    for (int i = 0; i < 5; i++)
        printf("%c\n", str[i]);

    int n[5];

    for (int i = 0; i < 5; i++)
        n[i] = i + 1;
    printf("\nintegers\n");
    printf("before:\n");
    for (int i = 0; i < 5; i++)
        printf("%i\n", n[i]);
    ft_bzero(n, sizeof(*n) * 5);
    printf("after:\n");
    for (int i = 0; i < 5; i++)
        printf("%i\n", n[i]);
}