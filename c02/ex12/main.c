#include <stdio.h>

char	*gethex(int nb, char *hex);
void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	hex[2];
	char	string[] = "Hello world";
	
	ft_print_memory(string, 11);
	printf("%c%c\n", hex[0], hex[1]);
}