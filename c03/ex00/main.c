#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "98";
	char	s2[] = "12";
	int a = ft_strcmp(s1, s2);
	int b = strcmp(s1, s2);
	printf("%d - %d\n", a, b);
}