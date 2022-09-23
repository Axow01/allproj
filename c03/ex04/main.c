#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	src[] = "";
	char	to_find[] = "";

	printf("%s\n", strstr(src, to_find));
	printf("%s\n", ft_strstr(src, to_find));
	return (0);
}