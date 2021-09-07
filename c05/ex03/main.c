#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main()
{
	printf("(3)pow-3:%d\n", ft_recursive_power(3, -3));
	printf("(0)pow0:%d\n", ft_recursive_power(0, 0));
	printf("(5)pow1:%d\n", ft_recursive_power(5, 1));
	printf("(-5)pow3:%d\n", ft_recursive_power(-5, 3));
}
