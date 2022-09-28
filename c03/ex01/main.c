
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "aBc";
	char	s2[] = "abC";
	printf("%d\n", ft_strncmp(s1, s2, 2));
	printf("%d\n", strncmp(s1, s2, 2));
	return (0);
}
