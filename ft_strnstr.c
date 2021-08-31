char *ft_strnstr(char *large, char *small, int size)
{
    int i;
    int j;

    i = 0;
    // returns pointer to large if small is empty string
    if (*small == '\0')
        return (large);
    // returns first occurence of small in large
    while (i < size)
    {
        j = 0;
        if (large[i] == small[j])
        {
            while (large[i + j] == small[j])
            {
                j++;
            }
            if (small[j] == '\0' && i + (j - 1) < size)
                return (large + i);
        }
        i++;
    }
    // returns NULL if small not found in large
    return (NULL);
}