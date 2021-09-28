#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *duplicate;

    duplicate = malloc(ft_strlen(s) + 1);
    if (duplicate == NULL || s == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        duplicate[i] = s[i];
        i++;
    }
    duplicate[i] = '\0';
    return (duplicate);
}