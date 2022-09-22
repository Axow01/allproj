#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "Oic^Km0M[      -]Bm^<Nf^[      -,)9s:8Wptvm=9Y24";
	
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
