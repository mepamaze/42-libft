#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;
	char	*p;

	c = (unsigned char)c;
	if (c == '\0')
		return (ft_strchr (s, '\0'));
	found = NULL;
	while (ft_strchr (s, c) != NULL)
	{
		p = ft_strchr (s, c);
		found = p;
		s = p + 1;
	}
	return ((char *) found);
}
