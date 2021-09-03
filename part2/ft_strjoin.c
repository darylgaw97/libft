#include <stdlib.h>

static int ft_strlen(const char *str);

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;

    char *joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (joined == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        joined[i + j] = s2[j];
        j++;
    }
    joined[i + j] = '\0';
    return (joined);
}

static int ft_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}