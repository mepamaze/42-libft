#include "libft.h"

static int	ft_isspace(int c)
{
	int	space;

	space = (c == '\t' || c == '\n' || c == '\v');
	if (!(space || c == '\f' || c == '\r' || c == ' '))
		return (0);
	return (1);
}

int	ft_isnegative(char c)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	const int	max_int = 2147483647;
	const int	min_int = -2147483648;
	int			index;
	long		num;
	int			signal;

	index = 0;
	num = 0;
	while (ft_isspace(str[index]))
		index++;
	signal = ft_isnegative(str[index]);
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (ft_isdigit(str[index]))
	{
		num = num * 10 + str[index] - '0';
		index++;
		if (signal == 1 && num > max_int)
			return (-1);
		if (signal == -1 && num < min_int)
			return (0);
	}
	return (num * signal);
}
