
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*strs[] = {"va", "chier", "guylaine", "ma dire a ta mere t gay", "gagnon    "};
	char	sep[] = "\n";
	//int	size = argv[1];

	(void) argv;
	(void) argc;
	char	*str = ft_strjoin(0, strs, sep);

	printf("%s\n", str);
	free(str);
	return (0);
}