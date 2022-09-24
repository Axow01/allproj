#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "les gens !";
	char	dest[200] = "Bonjour, ";
	char	dest1[200] = "fkadjfkad, ";
	int		length = strlcat(dest, src, 15);
	int		length2 = ft_strlcat(dest1, src, 15);

	dest1[1] = 'a';

	printf("%lu - %s - %lu\n", (unsigned long)length, dest, strlen(dest));
	printf("%lu - %s - %lu\n", (unsigned long)length2, dest1, strlen(dest1));
	return (0);
}
