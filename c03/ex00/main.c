#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int a = ft_strcmp("47734", "999888");
	int b = strcmp("47734", "999888");
	printf("%d - %d\n", a, b);
}