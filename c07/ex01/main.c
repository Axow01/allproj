#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	long int min = -20000;
	long int max = 20030033;
	int	*p = ft_range(min, max);
	long int i;
	long int diff2 = (max - min) * sizeof(int);

	if (diff2 < 0)
		diff2 *= -1;
	if (p == NULL)
		return (0);
	for (i = 0; i < (max - min); i++)
	{
		printf("%d, ", p[i]);
	}
	printf("\n");
	free(p);
	return (0);
}
