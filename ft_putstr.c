#include "libft.h"

int ft_putstr(char *str)
{
    int str_len;
    
    str_len = (ft_strlen(str));
    write(1, str, str_len);
    return (str_len);
}
