#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t (ret);

    ret = ft_strlen(dst) + ft_strlen(src);
    i = 0;
    while (i < dstsize && dst[i] != '\0')
        i++;
    j = 0;
    if (dstsize <= i)
        return (dstsize + ft_strlen(src));
    while (i + j < dstsize - 1 && src[j] != '\0')
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (ret);
}