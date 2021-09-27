#include "libft.h"
#include <stdio.h>

int main()
{
    char *str = "abcde";
    char *dest = malloc(sizeof(char *));
    printf("%s\n", (char *)ft_memcpy(dest, str, 5));
}
