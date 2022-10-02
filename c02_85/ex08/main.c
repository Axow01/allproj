#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	testString[] = "BJOANDFJAKSDJF;ASDJF'ADSJFAED0RFIJDKLVAJSDCKVAJSD;FJADKFJADSFJ308927U3IO4J23K4J23LKFJZASDLKFVJAD";
	printf("%s\n", testString);
	printf("%s\n", ft_strlowcase(testString));
	return(0);
}