#include <stdlib.h>

static void is_negative(char *str, long *num, int *i);

char *ft_itoa(int n)
{
    char *str;
    long num;
    long divider;
    int i;

    str = malloc(12);   //malloc-ed 12 bytes because max int -2147483648 is 11 chars long, plus 1 byte for null cap
    num = n;
    i = 0;
    if (num < 0)        //checking for negative integers, if yes, first char becomes '-', then num is converted to positive integer
        is_negative(str, &num, &i);
    else if (num == 0)  //this is an edge case (dividing zero by zero will result in error)
        return ("0");
    divider = 1;
    while (num / divider != 0)  //setting 'divider' to the correct size, according to the size of num
        divider *= 10;
    //start assigning to str each digit, decreasing 'divider' by one zero after each iteration, so that the next digit can be obatined,
    //when 'divider' becomes '0', means that the last digit has been converted to char.
    while ((divider /= 10) != 0)
    {
        str[i] = (num % (divider * 10) / divider) + '0';
        i++;
    }
    str[i] = '\0';  //remember to null cap
    return (str);
}

static void is_negative(char *str, long *num, int *i)
{
    str[0] = '-';
    *num /= -1;
    *i = 1;
}

/*
    Somewhat confusing syntax as norminette only allows 25 lines per function, a lot of compression in the code above was done,
    hence the reduction in readiblity.
    An alternative is to use helper functions but it could make the code even harder to read if not written well.
    In this case, the "is_negative" function is used to save 4 lines.

    code tested for:
        1.             -2147483648
        2.              2147483647
        3.                       0
        4. random positive integer
        5. random negative integer
*/
