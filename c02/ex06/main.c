#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	val[] = "";
	int	returned = ft_str_is_printable(val);
	printf("%s\n", val);

	printf("%d\n", returned);
	return (0);
}