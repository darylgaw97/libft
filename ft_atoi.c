#include "libft.h"
#include <stdio.h>

static int ft_isspace(const char c);

int main()
{
    printf("%i\n", ft_atoi("2147483648"));
    printf("%i\n", atoi("2147483648"));
}

int ft_atoi(const char *str)
{
    int sign;
    int i;
    long result;

    sign = 1;
    i = 0;
    result = 0;
    while (ft_isspace(str[i]))
        i++;
    // checking for positive or negative sign
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    // converting char * to int
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result = result + str[i] - '0';
        i++;
    }
    if (sign == -1)
        result *= sign;
    return (result);
}

static int ft_isspace(const char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return (1);
    return (0);
}
