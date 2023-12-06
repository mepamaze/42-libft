#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	result = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result == 0)
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		result[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
