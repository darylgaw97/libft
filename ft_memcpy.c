#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    if (dest == NULL || src == NULL)
        return (NULL);
    i = 0;
    while (i < n)
    {
        ((char *)dest)[i] = ((char *)src)[i];
        i++;
    }
    return (dest);
}

/*
    Typecasting "dest" and "src" into type "char *" to allow dereferencing of type void.

    When copying type "int" make sure to input correct "size" as a bigger integer may require more memory,
    typically just use the "sizeof" operator to prevent allocating the wrong size for whatever variable type that is being copied.
    For example: sizeof(int) == 4 bytes, sizeof(char) == 1 byte
*/