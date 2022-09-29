#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "fjdjkfjdk";
	char	dest[200] = "Bonjour, ";
	char	dest1[200] = "Bonjour, ";
	int		length = strlcat(dest, src, 15);
	int		length2 = ft_strlcat(dest1, src, 15);


	printf("%lu - %s - %lu\n", (unsigned long)length, dest, strlen(dest));
	printf("%lu - %s - %lu\n", (unsigned long)length2, dest1, strlen(dest1));
	return (0);
}
