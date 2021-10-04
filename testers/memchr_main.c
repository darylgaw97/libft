#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};

    printf("%i\n", *(int *)ft_memchr(s, 256 + 2, 3));
}

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *memory;

    memory = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (memory[i] == (unsigned char)c)
            return ((void *)(s + i));
        i++;
    }
    return (NULL);
}
