#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *temp_s;
    long unsigned i;

    temp_s = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        temp_s[i] = '\0';
        i++;
    }
}

/*
Segmentation fault occurs when attempting to use bzero on a string.
However, bzero works without seg fault when using it on array of chars.
    Example:
        scenario 1:
            char *str = "abcde";
            bzero(str, 5);
                seg fault occurs!

        scenario 2:
            char str[5] = {'a', 'b', 'c', 'd', 'e'};
            bzero(str,5);
                no seg fault!
*/