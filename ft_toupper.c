#include "libft.h"

static int	ft_islower(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	return (c);
}
