#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    if (size == 0)
        return (ft_strlen(src));
    i = 0;
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}

/*
    The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
    The strlcpy() function returns the total length of the string it tried to create.
    strlcpy returns the length of the string whether or not it was possible to copy it all -- this makes it easier to calculate the required buffer size.
    For strlcpy() that means the length of src.
*/