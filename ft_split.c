#include "libft.h"

static int count_strings(char const *s, char c);
static char **no_substr(char **s);
static char *make_substr(char const *s, char c);
static int substrlen(char const *s, char c);

char    **ft_split(char const *s, char c)
{
    char **strings;
    int str_count;
    int i;

    if (s == NULL)
        return (NULL);
    str_count = count_strings(s, c);
    if (!(strings = malloc(sizeof(char *) * str_count + 1)))
        return (NULL);
    if (str_count == 0)
        return (no_substr(strings));
    i = 0;
    str_count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        strings[str_count] = make_substr((s + i), c);
        str_count++;
        i += substrlen((s + i), c);
    }
    strings[str_count] = NULL;
    return (strings);
}

static int count_strings(char const *s, char c)
{
    int i;
    int str_count;

    i = 0;
    str_count = 0;
    while(s[i])
    {
        if (s[i] != c)
        {
            str_count++;
            while (s[i] && s[i] != c)
                i++;
            continue;
        }
        i++;
    }
    return (str_count);
}

static char **no_substr(char **s)
{
    s[0] = NULL;
    return (s);
}

static char *make_substr(char const *s, char c)
{
    char *substr;
    int i;

    substr = malloc(substrlen(s, c) + 1);
    if (substr == NULL)
        return (NULL);
    i = 0;
    while (s[i] && s[i] != c)
    {
        substr[i] = s[i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}

static int substrlen(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}