#include "libft.h"

char	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*d;

	if (!dest && !src)
		return (0);
	d = dest;
	while (len-- > 0)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (d);
}
