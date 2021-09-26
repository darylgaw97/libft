int ft_strlen(const char *str)
{
    int j;

    j = 0;
    while (str[j])
        j++;
    return (j);
}