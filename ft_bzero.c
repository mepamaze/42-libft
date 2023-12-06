#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *)s, 0, (size_t)n);
}
