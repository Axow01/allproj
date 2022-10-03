
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*strs[] = {"Bonjour", "peoples", "bjjbbj", "je suis jean jaque", "testing    "};

	if (argc != 3)
		return (0);
	//int	size = argv[1];

	char	*str = ft_strjoin(5, strs, argv[2]);

	printf("%s\n", str);
	free(str);
	return (0);
}