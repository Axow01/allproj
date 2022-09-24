#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	a;
	if (argc > 1)
		a = ft_atoi(argv[1]);
	return (0);
}
