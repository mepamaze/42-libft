#include "libft.h"

static int	ft_digit_count(long number)
{
	int	result;

	if (number == 0)
		result = 0;
	else
		result = 1;
	while (number / 10)
	{
		number = number / 10;
		++result;
	}
	return (result);
}

static void	ft_negative_handler(int n, long *number, int *flag_signal)
{
	if (n > 0)
	{
		*number = n;
		*flag_signal = 0;
	}
	else
	{
		*number = -((long)n);
		*flag_signal = 1;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	long	number;
	int		flag_signal;
	int		len;

	ft_negative_handler(n, &number, &flag_signal);
	len = ft_digit_count(number);
	result = malloc(len + flag_signal + 1);
	if (result == 0)
		return (0);
	result[len + flag_signal] = 0;
	while ((len + 1) && number)
	{
		result[flag_signal + --len] = number % 10 + '0';
		number /= 10;
	}
	if (flag_signal)
	{
		if (n == 0)
			result[0] = '0';
		else
			result[0] = '-';
	}
	return (result);
}
