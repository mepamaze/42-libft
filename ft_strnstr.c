#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i + j] == find[j])
		{
			if (i + j + 1 > slen)
				return (NULL);
			if (find[j + 1] == '\0')
				return ((char *)&s[i]);
			j++;
		}
		j = 0;
		i++;
	}
	if (*find == '\0')
		return ((char *)s);
	return (NULL);
}
