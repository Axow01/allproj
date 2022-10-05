#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	base_from[] = "01234567";
	char 	base_to[] = "0123456789ABCDEF";
	char	nbr[] = "   ----+--17777777777";

	char *final = ft_convert_base(nbr, base_from, base_to);

	printf("%s", final);
	free(final);
	return (0);
}
