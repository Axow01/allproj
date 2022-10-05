
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*strs[] = {"Bonjour", "test", "jspa", "560"};
	char	sep[] = ", ";
	//int	size = argv[1];

	(void) argv;
	(void) argc;
	char	*str = ft_strjoin(2, strs, sep);

	printf("%s\n", str);
	free(str);
	return (0);
}