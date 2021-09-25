#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;

    char *substr = malloc((sizeof(char) * len) + 1);
    if (substr == NULL)
            return (NULL);
    i = 0;
    while (i < len)
    {
        substr[i] = s[i + start];
        if (s[i] == '\0')
            return (substr);
        i++;
    }
    substr[i] = '\0';
    return (substr);
}