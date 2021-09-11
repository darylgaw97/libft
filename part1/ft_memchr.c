void *ft_memchr(const void *s, int c, size_t n)
{
    long unsigned int i;
    // type cast 's' into "unsigned char" then assign it to "memory", this is because type "void *" cannot be dereferenced.
    // 's' cannot be used to compare with 'c' without first being dereferenced.
    unsigned char *memory;
    memory = (unsigned char *)s;

    i = 0;
    while (i < n)
    {
        if (memory[i] == c)
            return ((void *)(memory + i));
        i++;
    }
    return (NULL);
}