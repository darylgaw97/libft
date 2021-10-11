#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;

    if (*needle == '\0')
        return ((char *)(haystack));
    i = 0;
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[0] && i + (ft_strlen(needle) - 1) < len)
        {
            if (!(ft_strncmp(haystack + i, needle, ft_strlen(needle))))
                return ((char *)(haystack + i));
        }
        i++;
    }
    return (NULL);
}