#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*result;

	result = (char *) malloc(len + 1);
	if (result == 0 || !s)
		return (0);
	count = 0;
	while (count < len && start < ft_strlen(s))
	{
		result[count++] = s[start++];
	}
	result[count] = '\0';
	return (result);
}
