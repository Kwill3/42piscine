#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int i;
	int j;

	i = 42;
	j = 3;
	a = &i;
	b = &j;
	ft_swap(a, b);
	printf("i(42): %d\n",*a);
	printf("j(3) : %d\n",*b);
}
