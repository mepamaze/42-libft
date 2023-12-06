#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		begin;
	int		end;

	if (!s1)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	begin = 1;
	end = 1;
	while (begin || end)
	{
		if (ft_strchr(set, s1[i]))
			++i;
		else
			begin = 0;
		if (ft_strchr(set, s1[j]))
			--j;
		else
			end = 0;
		if (i > j || i == j)
			return ("");
	}
	return (ft_substr(s1, i, (j - i + 1)));
}
