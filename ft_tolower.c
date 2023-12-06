static int	ft_isupper(int c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}
