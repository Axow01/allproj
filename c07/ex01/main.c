#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int min = 0;
	int max = 2147483647;
	int	*p = ft_range(min, max);
	int i;

	if (p == NULL)
		return (0);
	for (i = 0; (long int)i <= (long int)((max - 1) - min); i++)
	{
		printf("%d\n", p[i]);
	}
	printf("\n");
	free(p);
	return (0);
}
