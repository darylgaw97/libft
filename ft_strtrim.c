#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);
static int in_set(char const c, char const *set);

int main (void)
{
    char *str = NULL;

    str = ft_strtrim("   xxxtripouille   xxx", " x");
    printf("%s\n", str);
    free (str);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
    int i;

    if (!(trimmed = malloc(ft_strlen(s1 + 1))))
        return (NULL);
    while (in_set(*s1, set))
        s1++;
    i = 0;
    while (s1[i])
    {
        trimmed[i] = s1[i];
        i++;
    }
    trimmed[i] = '\0';
    while (s1 + i >= s1)
    {
        if (in_set(s1[i], set))
            trimmed[i] = '\0';
        i--;
    }
    return (trimmed);
}

static int in_set(char const c, char const *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}