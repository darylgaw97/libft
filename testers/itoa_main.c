#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *a = ft_itoa(INT_MIN);
    printf("%s\n", a);
    free (a);

    a = ft_itoa(INT_MAX);
    printf("%s\n", a);
    free (a);

    a = ft_itoa(0);
    printf("%s\n", a);
    free (a);

    a = ft_itoa(42);
    printf("%s\n", a);
    free (a);

    a = ft_itoa(-42);
    printf("%s\n", a);
    free (a);
}