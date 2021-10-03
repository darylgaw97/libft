#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("ft_function:\toriginal function:\n");
    printf("%i\t", ft_atoi("-2147483648"));         printf("%i\n", atoi("-2147483648"));
    printf("%i\t", ft_atoi("2147483647"));          printf("%i\n", atoi("2147483647"));
    printf("%i\t\t", ft_atoi("-0"));                printf("%i\n", atoi("-0"));
    printf("%i\t\t", ft_atoi("0"));                 printf("%i\n", atoi("0"));
    printf("%i\t\t", ft_atoi("+0"));                printf("%i\n", atoi("+0"));
    printf("%i\t\t", ft_atoi(" \n\t-42"));          printf("%i\n", atoi(" \n\t-42"));
    printf("%i\t\t", ft_atoi(" \n\t42"));           printf("%i\n", atoi(" \n\t42"));
    printf("%i\t\t", ft_atoi(" \n\t+42"));          printf("%i\n", atoi(" \n\t+42"));
}
