#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;
	int				j;

	from = (unsigned char *) src;
	to = (unsigned char *) dest;
	if (from == to || n == 0)
		return (dest);
	if (to > from && to - from < (int)n)
	{
		j = n - 1;
		while (j-- > 0)
			to[j] = from[j];
		return (dest);
	}
	if (from > to && from - to < (int)n)
	{
		i = -1;
		while (++i < n)
			to[i] = from[i];
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
