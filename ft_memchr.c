#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *memory;

    memory = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (memory[i] == (unsigned char)c)
            return ((void *)(memory + i));
        i++;
    }
    return (NULL);
}

/*
    memchr only looks at 8 bits or 1 byte at a time, hence if 'c' is an integer larger than '255', memchr will not detect it as a match.

    type cast 's' into "(unsigned char *)" then assign it to "memory", this is because type "(void *)" cannot be dereferenced.
    's' cannot be used to compare with 'c' without first being dereferenced.
*/