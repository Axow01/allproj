#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "34onjour co.mment ;ajd;fj vous aller 34test";
	
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}