#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned)ft_strlen(s))
	    return (ft_strdup(""));
	if (len < (unsigned)ft_strlen(s))
		substr = malloc(len + 1);
	else
		substr = malloc(ft_strlen(s) + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
