#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*memory;
	long unsigned	i;

	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
