#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int a = ft_strcmp("hello World", "Hello World");
	int b = strcmp("hello World", "Hello World");
	printf("%d - %d\n", a, b);
}