#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[] = "les gens !";
	char	dest[300] = "Bonjour, ";
	char	dest1[300] = "Bonjour, ";

	printf("%s\n", strncat(dest1, src, 3));
	printf("%s\n", ft_strncat(dest, src, 3));
	return (0);
}