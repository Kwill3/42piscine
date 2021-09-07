#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_upp;

	p_upp = upper;
	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;
	
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", upper, ft_str_is_uppercase(p_upp));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));

	return (0);
}
