#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	if (!s || !f || !(ft_strdup(s)))
		return (0);
	str = ft_strdup(s);
	index = 0;
	while (str[index])
	{
		str[index] = f(index, str[index]);
		index++;
	}
	return (str);
}
