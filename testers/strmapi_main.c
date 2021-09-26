#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
static int ft_strlen(char const *str);
char function(unsigned int i, char c);

int main(void)
{
    char *str = "abcde";
    char *n = (char *)ft_strmapi(str, function);
    printf("%s\n", n);
}

char function(unsigned int i, char c)
{
    return (c + i);
}