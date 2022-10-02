#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int min = -4;
	int max = 20;
	int i;
	int a = ft_ultimate_range(&range, min, max);
	printf("%d\n", a);
	for (i = 0; i < (max - min); i++)
	{
		printf("%d, ", range[i]);
	}
	printf("\n");
	return (0);
}