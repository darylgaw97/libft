#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*copy1;
	unsigned char	*copy2;

	if (n == 0)
		return (0);
	copy1 = (unsigned char *)s1;
	copy2 = (unsigned char *)s2;
	i = 0;
	while (copy1[i] && copy2[i])
	{
		if (copy1[i] != copy2[i] || i == n - 1)
			return (copy1[i] - copy2[i]);
		i++;
	}
	return (copy1[i] - copy2[i]);
}
