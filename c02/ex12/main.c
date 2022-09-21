#include <stdio.h>

char	*gethex(int nb, char *hex);

int	main(void)
{
	char	hex[2];
	gethex(77, hex);
	printf("%c%c\n", hex[0], hex[1]);
}