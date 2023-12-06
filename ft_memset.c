#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*s;

	s = dest;
	while (n--)
		*s++ = (unsigned char)c;
	return (dest);
}
