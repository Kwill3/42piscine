#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	printf("-75885\n");
	printf("%d\n", ft_atoi_base(" --+-1286dlkklpo", "0123456789abcdef"));
	printf("42\n");
	printf("%d\n", ft_atoi_base(" -+-101010klpo", "01"));
}
