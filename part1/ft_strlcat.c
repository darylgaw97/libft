static int ft_strlen(const char *str);

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    long unsigned int i;
    long unsigned int j;
    int return_value;

    if (dstsize == 0)
        return (0);
    return_value = ft_strlen(dst) + ft_strlen(src);
    i = ft_strlen(dst);
    j = 0;
    while (src[j] && (i + j) < dstsize - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    return (return_value);
}

static int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}