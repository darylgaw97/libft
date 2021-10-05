#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    if (len < (unsigned)ft_strlen(s))
        substr = malloc(len + 1);
    else
        substr = malloc(ft_strlen(s + 1));
    if (s == NULL || substr == NULL)
        return (NULL);
    if (start >= (unsigned)ft_strlen(s))
    {
        *substr = '\0';
        return (substr);
    }
    i = 0;
    while (s[i] && i < len)
    {
        substr[i] = s[i + start];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}