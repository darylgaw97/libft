#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int main(void)
{
    char **strings;
    char *s = "1 2 3 4 5 6 7 8 9 0 ";

    strings = ft_split(s, ' ');
    int i = 0;
    while (strings[i])
    {
        printf("%s\n", strings[i]);
        free(strings[i]);
        i++;
    }
    free(strings[i]);
    free(strings);
    /*
    ft_split should be free of memory leaks if using this main function, 
    if not, most likely ft_split is not using malloc properly or perhaps coder is not assigning variables to malloced memory properly
    */
}