#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *tab[6];

	tab[0] = "zero";
	tab[1] = "one";
	tab[2] = "two";
	tab[3] = "three";
	tab[4] = "four";
	tab[5] = "five";
	printf("%s\n", ft_strjoin(6, tab, "!"));
	return (0);
}
