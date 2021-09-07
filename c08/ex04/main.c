#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main()
{
	char *tab[5];
	int i = 0;
	tab[0] = "first";
	tab[1] = "2nd";
	tab[2] = "third";
	tab[3] = "test4";
	tab[4] = "last";
	t_stock_str *print = ft_strs_to_tab(5, tab);
	while (print[i].str)
	{
		printf("%d, %s, %s\n", print[i].size, print[i].str, print[i].copy);
		i++;
	}
}
