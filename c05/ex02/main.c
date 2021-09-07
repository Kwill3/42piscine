#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main()
{
	printf("(0)pow2:%d\n", ft_iterative_power(0, 2));
	printf("(0)pow0:%d\n", ft_iterative_power(0, 0));
	printf("(-3)pow3:%d\n", ft_iterative_power(-3, 3));
	printf("(6)pow-3:%d\n", ft_iterative_power(6, -3));
}
