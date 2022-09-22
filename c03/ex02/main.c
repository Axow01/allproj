#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[] = "Hello world !";
	char	dest[] = "Everyone, ";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}