#include <stdio.h>

int	ft_strlen(char *str);

int	main()
{
	char	string[] = "Bonjour les amis je suis la !";
	printf("Length of -> %s = %dchars\n", string, ft_strlen(string));
	return (0);
}