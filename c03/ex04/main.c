#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	src[] = "Bonjour les amis !";
	char	to_find[] = "jour";

	printf("%s\n", strstr(src, to_find));
	//printf();
	return (0);
}