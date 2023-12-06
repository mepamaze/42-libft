#include "libft.h"

static int	ft_insert_str(const char *s, char c, char **arr)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		++len;
	if (len == 0)
		return (0);
	*arr = malloc(len + 1);
	if (*arr == 0)
		return (0);
	ft_memcpy(*arr, s, len);
	(*arr)[len] = 0;
	return (1);
}

static int	ft_count(const char *s, char c)
{
	int	result;
	int	flag_delimiter;

	result = 0;
	flag_delimiter = 1;
	while (*s)
	{
		if (*s != c && flag_delimiter)
			++result;
		if (*s == c)
			flag_delimiter = 1;
		else
			flag_delimiter = 0;
		++s;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	len_words;
	size_t	ind;
	int		flag_delimiter;
	char	**result;

	if (!s)
		return (0);
	len_words = ft_count(s, c);
	result = malloc(sizeof(char *) * (len_words + 1));
	if (result == 0)
		return (0);
	result[len_words] = 0;
	flag_delimiter = 1;
	ind = 0;
	while (*s)
	{
		if (*s != c && flag_delimiter && !ft_insert_str(s, c, result + ind++))
			return (0);
		if (*s == c)
			flag_delimiter = 1;
		else
			flag_delimiter = 0;
		++s;
	}
	return (result);
}
