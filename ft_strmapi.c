#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *mapped;
    int i;

    mapped = ft_strdup(s);
    if (mapped == NULL || s == NULL || f == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        mapped[i] = f(i, s[i]);
        i++;
    }
    mapped[i] = '\0';
    return (mapped);
}