#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char destination[50] = "Part I of this series.";
	char source[] = "Part II of this multipart series";
	//char d[70] = "Part I of this series.";
	//char s[] = "Part II of this multipart series";

	//printf("BEFORE:\nstrcat D: %s\nS: %s\n\n", d, s);
	printf("BEFORE:\nft_strcat D: %s\nS: %s\n\n", destination, source);
	//printf("AFTER\nsize: %lu",strlcat(d, s, 50));
	printf("AFTER\nft_size: %u\n", ft_strlcat(destination, source, 50));
	//printf("\nstrcat D: %s\nS: %s\n\n", d, s);
	printf("ft_strcat D: %s\nS: %s\n\n", destination, source);
}
