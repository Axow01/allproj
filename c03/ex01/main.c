
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_strncmp("Bonjour les gens !", "Bonjour les chiens !", 14));
	return (0);
}
