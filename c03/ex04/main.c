#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char haystack[] = "These are not the droids you are looking for.";
	char needle[] = "droids";
	char empty[] = "";
	char null[] = "R2D2";

	printf("Haystack: %s \n", haystack);
	printf("Needle: %s \n---------------------\n", needle);
	printf("Sucess: %s \n", ft_strstr(haystack, needle));
	printf("Empty: %s \n", ft_strstr(haystack, empty));
	printf("Failed: %s \n", ft_strstr(haystack, null));
}
