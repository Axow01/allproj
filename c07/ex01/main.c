#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	long int min = -5;
	long int max = 2147483647;
	int	*p = ft_range(min, max);
	int i;
	long int diff2 = (max - min) * sizeof(int);

	if (diff2 < 0)
		diff2 *= -1;
	if (p == NULL)
		return (0);
	for (i = 0; (long int)i <= diff2; i++)
	{
		printf("%d\n", p[i]);
	}
	printf("\n");
	free(p);
	return (0);
}
