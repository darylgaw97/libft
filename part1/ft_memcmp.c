#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    int s1[5] = {0,1,255,256,300};
    int s2[5] = {0,257,255,256,301};
    printf("%i\n", memcmp(s1, s2, 5));
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int i;
    unsigned char *memory1;
    unsigned char *memory2;

    memory1 = (unsigned char *)s1;
    memory2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (memory1[i] != memory2[i])
            return (memory1[i] - memory2[i]);
        i++;
    }
    return (0);
}

/*
    type cast 's1' and 's2' into "(unsigned char *)" and assigned them to "memory1" and "memory2" to allow dereferencing.
    
    since 's1' and 's2' is being compared as "unsigned char"s, maximum integer value allowed before wrap-around occurs is 255, 
    hence,
    if integer of 256 is compared to 0, memcpy will return a value of '0' thinking that there is no difference.
*/