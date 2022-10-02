#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[100] = "allobonjour";
	char	dest2[100] = "allobonjour";
	
	printf("%s\n", ft_strncpy(dest, "dfkajdf;kadjf;kadjf;lakjdfakdjf;kadjsf;akdfj;adkfajdsfkadjf;adfja;dadf", 5));
	printf("%s\n", ft_strncpy(dest2, "dfkajdf;kadjf;kadjf;lakjdfakdjf;kadjsf;akdfj;adkfajdsfkadjf;adfja;dadfk", 5
	));
}
