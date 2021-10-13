#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*memory;

	memory = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (memory[i] == (unsigned char)c)
			return ((void *)(memory + i));
		i++;
	}
	return (NULL);
}
