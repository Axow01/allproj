
void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	int		nbr = 17;
	ft_putnbr_base(nbr, base);
	return (0);
}
