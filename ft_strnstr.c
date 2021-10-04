#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    // returns pointer to haystack if needle is empty string
    if (*needle == '\0')
        return ((char *)haystack);
    // returns first occurence of needle in haystack
    while (i < len)
    {
        j = 0;
        if (haystack[i] == needle[j])
        {
            while (haystack[i + j] == needle[j])
            {
                j++;
            }
            if (needle[j] == '\0' && i + (j - 1) < len)
                return ((char *)(haystack + i));
        }
        i++;
    }
    // returns NULL if needle not found in haystack
    return (NULL);
}