char *ft_strrchr(char *str, char c)
{
    int i;
    int pointer;

    i = 0;
    pointer = -1;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            pointer = i;
        i++;
    }
    if (str[i] == '\0' && c == '\0')
        return (str + i);
    else if (pointer != -1)
        return (str + pointer);
    else
        return (NULL);
}