#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	
	p_lwr = lowercase;
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	
	p_all = allcases;
	char empty[] = "";
	char *p_emp;
	p_emp = empty;
	printf("\n-----\n%s = ", lowercase);
	printf("%s\n", ft_strlowcase(p_lwr));
	printf("%s = ", allcases);
	printf("%s\n", ft_strlowcase(p_all));
	printf("Empty = %s\n-----\n", ft_strlowcase(p_emp));
}
