
void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[] = "01234567";
	int		nbr = -2147483648;
	ft_putnbr_base(nbr, base);
	return (0);
}
