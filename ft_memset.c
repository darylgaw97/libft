#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *temp_s;
    unsigned char temp_c;
    long unsigned i;

    temp_s = (unsigned char *)s;
    temp_c = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        temp_s[i] = temp_c;
        i++;
    }
    return (s);
}

/*
If you intend to store arbitrary binary data, you should use unsigned char.
It is the only data type that is guaranteed to have no padding bits by the C Standard.
Each other data type may contain padding bits in its object representation (that is the one that contains all bits of an object,
instead of only those that determines a value).
The padding bits' state is unspecified and are not used to store values.
So if you read some binary data using 'char',
things would be cut down to the value range of a char (by interpreting only the value bits),
but there may still be bits that are just ignored but still are there and read by memcpy.
Much like padding bits in real struct objects.
Type unsigned char is guaranteed to not contain those.


Question:
    Why does memset only work with the integers '-1' and '0'?
*/