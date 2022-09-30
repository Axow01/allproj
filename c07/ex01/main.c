#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int min = -20000;
	int max = 20000;
	int	*p = ft_range(min, max);
	int i;

	if (p == NULL)
		return (0);
	for (i = 0; (long int)i <= (long int)(max - min); i++)
	{
		printf("%d, ", p[i]);
	}
	printf("\n");
	free(p);
	return (0);
}