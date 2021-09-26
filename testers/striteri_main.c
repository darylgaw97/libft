#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));
static void function(unsigned int i, char *s);

int main(void)
{
    char str[5] = {'1','2','3','4','5'};
    ft_striteri(str, function);
    printf("%s\n", (char *)str);
}

static void function(unsigned int i, char *s)
{
    char *c = s;
    printf("%c\n", *c);
    *c += i;
}

/*
"str" in main is initialised as followed (char[n] = {...}), 
because, if "str" is intialised by way of (char *str = "..."), then seg fault will occur when trying to change the characters inside "str".
*/