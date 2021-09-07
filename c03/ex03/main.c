#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char destination[200] = "Part I of this series.";
	char source[] = "Part II of this multipart series";
	char d[200] = "Part I of this series.";
	char s[] = "Part II of this multipart series";

	printf("BEFORE:\nstrcat D: %s\nS: %s\n\n", d, s);
	printf("ft_strcat D: %s\nS: %s\n\n", destination, source);
	strncat(d, s, 10);
	ft_strncat(destination, source, 10);
	printf("AFTER\nstrcat D: %s\nS: %s\n\n", d, s);
	printf("ft_strcat D: %s\nS: %s\n\n", destination, source);
}
