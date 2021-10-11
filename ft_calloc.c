#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *memory;
    long unsigned i;
    
    memory = malloc(nmemb * size);
    if (memory == NULL)
        return (NULL);
    i = 0;
    while (i < nmemb * size)
    {
        memory[i] = 0;
        i++;
    }
    return (memory);
}

/*
calloc() allocates the memory and also initializes the allocated memory block to zero.
If we try to access the content of these blocks then we’ll get 0.

return value:
    NULL is returned by a successful call to calloc() with nmemb or size equal to zero.
*/