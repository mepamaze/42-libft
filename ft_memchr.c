#include "libft.h"

void	*ft_memchr(const void *bigptr, int ch, size_t length)
{
	const char	*big = (const char *)bigptr;
	size_t		n;

	n = 0;
	while (n < length)
	{
		if (big[n] == ch)
			return ((void *)&big[n]);
		n++;
	}
	return (NULL);
}
