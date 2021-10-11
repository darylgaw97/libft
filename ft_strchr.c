#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if (c == 0)
        return ((char *)s);
    return (NULL);
}

/*
Make sure to typecast 'c' into unsigned char before comparing with '*s',
this is to prevent wrap around error,
example:
    if c was given as an integer of more than 127, i.e 128,
    and it is being interpreted as a "char" instead of "unsigned char",
    it will wrap-around and be interpreted as 0 instead of 128.
*/