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

/*
    Typecasting dest and src into type "char *" to facilitate variable assignment.

    When copying type "int" make sure to input correct "size" as a bigger integer may require more memory,
    typically just use the "sizeof" operator to prevent allocating the wrong size for whatever variable type that is being copied.
    For example: sizeof(int) == 4 bytes, sizeof(char) == 1 byte
/*