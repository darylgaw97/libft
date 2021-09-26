#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    int return_value;

    if (dstsize == 0)
        return (0);
    return_value = ft_strlen(dst) + ft_strlen(src);
    i = ft_strlen(dst);
    j = 0;
    while (src[j] && (i + j) < dstsize - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (return_value);
}