char *ft_strchr(char *str, char c)
{
    // checking if char matches c or already reched end of string
    while (*str != c && *str != '\0')
        str++;
    // functions returns '\0' if c is specified as '\0'
    // if c is not found then NULL is returned instead
    if (c != '\0')
        return (NULL);
    else
        return (str);
}