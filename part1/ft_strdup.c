#include <stdlib.h>

static int ft_strlen(const char *str);

char *ft_strdup(const char *s)
{
    int i;
    char *duplicate = malloc(ft_strlen(s) + 1);

    if (duplicate == NULL)
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

static int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}