#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*mem;

	mem = s;
	i = 0;
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
}
