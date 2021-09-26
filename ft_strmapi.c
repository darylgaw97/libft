#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_str;
    int i;

    if (s == NULL || f == NULL)     //checking if 's' or 'f' is NULL, failure to do so can result in seg fault when trying to dereference 's' or 'f'
        return (NULL);
    if (!(new_str = malloc(ft_strlen(s) + 1)))
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_str[i] = f(i, s[i]);    //modifying individual characters in s using function pointed by f, then assigning them to "new_str"
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}