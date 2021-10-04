#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    // checking if char matches c or already reached th eend of string
    while (*s != c && *s != '\0')
        s++;
    // functions returns address '\0' if c is specified as '\0'
    // if c is not found then NULL is returned instead
    if (c != '\0')
        return (NULL);
    else
        return (str);
}