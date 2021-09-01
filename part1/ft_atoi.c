int ft_atoi(char *str)
{
    int sign;
    int i;
    long result;

    sign = 1;
    i = 0;
    result = 0;

    // skipping white spaces
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    // checking for positive or negative sign
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    // converting char * to int
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result = result + str[i] - '0';
        i++;
    }
    if (sign == -1)
        result *= sign;
    return (result);
}