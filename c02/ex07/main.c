#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char	testString[] = "kfaj;dkjclvnadkjlfghadjkfeiowruqoiefjasldkfj:KLJKFJkledhjfioaedhfaklsdjhgaijhgtieruqoieasdf";
	printf("%s\n", testString);
	printf("%s\n", ft_strupcase(testString));
	return(0);
}