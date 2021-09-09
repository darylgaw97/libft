char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    // iterate to end of the string (NULL byte considers part of the string)
    while (s[i])
        i++;
    // iterate to the front to look for first instance of 'c'
    while (&s[i] != (s - 1))
    {
        if (s[i] == c)
            return((char *)s + i);
        i--;
    }
    // if not found, return NULL (using '\0' here instead of 'NULL' because 'NULL' is undefined in C by default)
    return ('\0');
}

/*
    The strrchr() function shall locate the last occurrence of c (converted to a char) in the string pointed to by s.
    The terminating NUL character is considered to be part of the string.
*/
