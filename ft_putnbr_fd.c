#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long i;
    char c;

    i = n;
    if (n < 0)
    {
        write (fd, "-", 1);
        i *= -1;
    }
    if (i > 9)
        ft_putnbr_fd(i / 10, fd);
    c = '0' + (i % 10);
    write(fd, &c, 1);
}