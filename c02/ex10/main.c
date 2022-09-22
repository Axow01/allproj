#include <stdio.h>
#include <string.h>

unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char	src[] = "qViDmIBaQyty <=> 12Ik <=> 2Cp <=> 18Wdqa <=> 18hri <=> 18iBhpD <=> 5l <=> 1KDHdAlJ <=> 7tpwjE <=> 5bYxeKeOCfbLCYlPRAS <=> 18EDkSwnAkMy <=> 10mtPTdv <=> 14XaRggnwMKPeWj <=> 13tGbsNoluAzORCmlvTH <=> 18RPpGDTnsetLGKgm <=> 15RyzyolxZmZSPrWGjS <=> 17pDPHUjCZdFbdnI <=> 14agZzvIMdxm <=> 10oFNFenmQYOkpUKGC <=> 16qetnyqJuodNunvDd <=> 16mVeqmxzE <=> 16poNAfYTvuCUtM <=> 13mhNZAFpNTqCPMcAQJRP <=> 19nixsyBFk <=> 10puzgOmJQnCI <=> 11ZcrgwstUNdqm <=> 12nFTQrG <=> 6HdrpLkw <=> 19lrlbMFwcyB <=> 10AJExAmGUtFTrn <=> 13tMobfioOvLsE <=> 12ifBOjXUn <=> 8dEenakkXxAZGr <=> 13LiWrDdNpNRjoZHIuAY <=> 18eP <=> 2exlfRgFoPJyBzSJoe <=> 20XIdLaLsIr <=> 9SveuNVRgkrsFP <=> 13uSOLdkI <=> 7eSt <=> 3nyvKPoxd <=> 16xj <=> 15jGQ <=> 3L <=> 1KLpNccnzoGCyWy <=> 14Iz <=> 18rit <=> 3pcvHvuJoLvL <=> 11AjdQ <=> 4gNWUdKBzR <=> 9NFOxeJzZjU <=> 10yFsFiYfYrkql <=> 12BhqQmhbjKS <=> 10DAwDkr <=> 6iGgSQoGEzFL <=> 18IgIbBdtfLaxcibdjGSPT <=> 20MSxKKtTfT <=> 9Be <=> 2GoQfokOdxLLlHiUcAn <=> 18BkTe <=> 4fdhRrRunQyaRuRJQZy <=> 18ksmZuniL <\n => 8Wz <=> 2xSKSuexZLxpOBeHa <=> 16seOYEWGKBneLtPt <=> 15GPcMrRoaLbDfCwuFUe <=> 18dmPHhD <=> 6Q <=> 1wbtcKTwtDRcLE <=> 13yeTkSekLSP <=> 10VzCk <=> 4yUVrMKwSbPSaVOqIyq <=> 18bNBshiiNk <=> 9mguY <=> 16zmcyz <=> 5jTu <=> 3klsAhNwWzKc <=> 11Ns <=> 2kmxdIAuhE <=> 9ClqrWPg <=> 7C <=> 1AnbqLU <=> 6TiLqEBPbbpw <=> 11zBAPiIu <=> 8GJDfdqZVcqjkoq <=> 14fVZzUFyBdm <=> 17On <=> 20rFOhvLa <=> 15Mwoo <=> 4BTtJvaVG <=> 14wHKZYvS <=> 7YhLkDOkdAwQXCIybFp <=> 18ouSyyCV <=> 7ggYMpvcgfGIniu <=> 15SWJsxZ <=> 6NoVGMLCJLkmC <=> 12aXYdPPxgFVpMvrtjY <=> 17VUXVWBYMmOB <=> 11UbdG <=> 4012345678 <=> 10abcdefgh <=> 10;[]'/.,_-) <=> 10 <=> 0 <=> 10";
	char	dest1[2000];
	char	dest[2000];


	printf("%s\n", src);
	printf("Length - %lu %u\n", strlcpy(dest, src, 50), ft_strlcpy(dest1, src, 50));
	printf("Lib -> %s\nME -> %s\n", dest, dest1);
}
