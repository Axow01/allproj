#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int min = -5;
	int max = 2000003;
	int i;
	int a = ft_ultimate_range(&range, min, max);
	printf("%d\n", a);
	for (i = 0; i < (max - min); i++)
	{
		printf("%d, ", range[i]);
	}
	free(range);
	printf("\n");
	return (0);
}
