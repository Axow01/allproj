#include <stdio.h>
#include <string.h>

unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char	src[] = "Bonjour les amis je suis bob !";
	char	dest1[2000];
	char	dest[2000];


	printf("%s\n", src);
	printf("Length - %lu %u\n", strlcpy(dest, src, 1), ft_strlcpy(dest1, src, 1));
	printf("Lib -> %s\nME -> %s\n", dest, dest1);
}