int	ft_isascii(int c)
{
	if ((c) & ~0x7f)
		return (0);
	return (1);
}
