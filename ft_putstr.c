#include "libft.h"

int ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    return (ft_strlen(str));
}