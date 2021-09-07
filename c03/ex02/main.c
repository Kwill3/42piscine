#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char destination[200] = "Part I of this series.";
	char source[] = "Part II of this multipart series";
	char d[200] = "Part I of this series.";
	char s[] = "Part II of this multipart series";

	printf("BEFORE:\nstrcat D: %s\nS: %s\n\n", d, s);
	printf("ft_strcat D: %s\nS: %s\n\n", destination, source);
	strcat(d, s);
	ft_strcat(destination, source);
	printf("AFTER\nstrcat D: %s\nS: %s\n\n", d, s);
	printf("ft_strcat D: %s\nS: %s\n\n", destination, source);
}
