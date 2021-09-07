#include <stdio.h>

int ft_is_prime(int nb);

int		main(void)
{
	printf("-42 = %d (0)\n", ft_is_prime(-42));
	printf("-3 = %d (0)\n", ft_is_prime(-3));
	printf(" 0 = %d (0)\n", ft_is_prime(0));
	printf(" 1 = %d (0)\n", ft_is_prime(1));
	printf(" 2 = %d (1)\n", ft_is_prime(2));
	printf(" 3 = %d (1)\n", ft_is_prime(3));
	printf(" 4 = %d (0)\n", ft_is_prime(4));
	printf(" 5 = %d (1)\n", ft_is_prime(5));
	printf(" 6 = %d (0)\n", ft_is_prime(6));
	printf(" 7 = %d (1)\n", ft_is_prime(7));
	printf(" 8 = %d (0)\n", ft_is_prime(8));
	printf(" 9 = %d (0)\n", ft_is_prime(9));
	printf(" 10 = %d (0)\n", ft_is_prime(10));
	printf(" 11 = %d (1)\n", ft_is_prime(11));
	printf(" 12 = %d (0)\n", ft_is_prime(12));
	printf(" 13 = %d (1)\n", ft_is_prime(13));
	printf(" 14 = %d (0)\n", ft_is_prime(14));
	printf(" 15 = %d (0)\n", ft_is_prime(15));
	printf(" 16 = %d (0)\n", ft_is_prime(16));
	printf(" 17 = %d (1)\n", ft_is_prime(17));
	printf(" 18 = %d (0)\n", ft_is_prime(18));
	printf(" 19 = %d (1)\n", ft_is_prime(19));
	printf(" 20 = %d (0)\n", ft_is_prime(20));
	printf(" 21 = %d (0)\n", ft_is_prime(21));
	printf(" 22 = %d (0)\n", ft_is_prime(22));
	printf(" 23 = %d (1)\n", ft_is_prime(23));
}
