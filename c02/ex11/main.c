#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
	char	src[] = "Coucou\ntu vas bien \n";
	ft_putstr_non_printable(src);
	return (0);
}
