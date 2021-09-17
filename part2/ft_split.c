#include <stdlib.h>

static char *make_substr(char const *s, char c);
static int ft_substrlen(char const *s, char c);

char **ft_split(char const *s, char c)
{
    char **strings;
    int str_count;
    int i;

    if (!(strings = malloc((ft_substrlen(s, '\0') * sizeof(char *)) + 1)))
        return (NULL);
    str_count = 0;
    i = 0;
    while (s[i])
    {
        //skipping all 'c's; except when 'c' is '\0'(to prevent buffer overrun)
        while (s[i] == c && s[i] != '\0')
            i++;
        //break when encountering end of string 's' to prevent "make_substr" from creating another substr that only contains a single '\0' char
        if (s[i] == '\0')
            break;
        //assigning substr to strings[str_count], returning NULL if make_str fails to malloc
        if ((strings[str_count] = make_substr((s + i), c)) == NULL)
            return (NULL);
        //increment 'i' so as to skip to the next substr start point
        i += ft_substrlen((s + i), c);
        str_count++;
    }
    strings[str_count] = NULL;
    return (strings);
}

static char *make_substr(char const *s, char c)
{
    char *substr;
    int i;

    if (!(substr = malloc(ft_substrlen(s, c) + 1)))
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

static int ft_substrlen(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

/*
        Tested for:
            1. 'c' as : -'\0'
                        - ' '
                        - random chars

            2. 's' having multiple c's at front and end of string
            
            3. different string sizes
            
            4. Valgrind test passed, no memory leaks detected
               (must use my own main function, which frees the allocated memories properly after printing each substring)
*/