
void *ft_memmove(void *dest, const void *src, size_t len)
{
    long unsigned int i;
    char *copy_dest;
    char *copy_src;
    char temp[len];

    copy_dest = (char *)dest;
    copy_src = (char *)src;
    i = 0;
    while (i < len)
    {
        temp[i] = copy_src[i];
        i++;
    }
    i = 0;
    while (i < len)
    {
        copy_dest[i] = temp[i];
        i++;
    }
    return (copy_dest);
}