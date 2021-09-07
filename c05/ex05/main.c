#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("0:%d \n",ft_sqrt(0));
	printf("1:%d \n",ft_sqrt(1));
	printf("5:%d \n",ft_sqrt(25));
	printf("Irrational:%d \n",ft_sqrt(146));
	printf("Irrational:%d \n",ft_sqrt(2147483642));
	printf("12:%d \n",ft_sqrt(144));
	printf("46340:%d \n",ft_sqrt(2147395600));
}
