#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (s != NULL)
	{
		while (s[count])
		{
			ft_putchar_fd(s[count], fd);
			count++;
		}
	}
}
