#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char *argv[])
{
	argc = 9;
	char *p = ft_strdup(argv[1]);
	printf("%s\n", p);
	free(p);
	return (0);
}