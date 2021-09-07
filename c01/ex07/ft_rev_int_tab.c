#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	iter;
	int	temp;

	count = size / 2;
	iter = 1;
	temp = 0;
	while (count != 0)
	{
		temp = tab[iter - 1];
		tab[iter - 1] = tab[size - iter];
		tab[size - iter] = temp;
		iter++;
		count--;
	}
}
