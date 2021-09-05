void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    long unsigned int i;
    char *typecasted_dest;
    char *typecasted_src;

    typecasted_dest = (char *)dest;
    typecasted_src = (char *)src;
    i = 0;
    while (i < n)
    {
        typecasted_dest[i] = typecasted_src[i];
        i++;
    }
    return (typecasted_dest);
}