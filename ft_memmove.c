#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
    char *dest = NULL;
    char *src = NULL;
    printf("%s\n", (char *)memmove(dest, src, 5));
}

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t i;
    unsigned char *ret;

    if (dest == NULL && src == NULL)
        return (NULL);
    ret = dest;
    i = 0;
    if (src < dest && (unsigned)(dest - src) < len)
    {
        i = len - 1;
        while (len--)
        {
            ret[i] = ((unsigned char *)src)[i];
            i--;
        }
        return (ret);
    }
    while (i < len)
    {
        ret[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (ret);
}