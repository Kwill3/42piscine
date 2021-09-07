#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char numeric[] = "64826841651";
	char *p_num;

	p_num = numeric;
	char other[] = "68426482F";
	char *p_oth;
	p_oth = other;
	
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only numbers\n0 = String doesn't contain only numbers\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", other, ft_str_is_numeric(p_oth));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));

	return (0);
}
