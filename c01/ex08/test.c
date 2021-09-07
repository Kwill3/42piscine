#include <unistd.h>
#include <stdio.h>

void	quicksort(int *tab, int low, int high);

void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	low;
	int	high;

	low = 0;
	high = size - 1;
	quicksort(tab, low, high);
}

void	quicksort(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	point;
	int restart;

	pivot = high;
	i = low;
	point = 1;
	restart = 1;
	while (point != high && restart != 0)
	{
		restart = 0;
		point = 0;
		while (i <= high)
		{
			if (tab[i] <= tab[pivot])
			{
				swap(&tab[i], &tab[point]);
				if (i != high)
					point++;
			}
			i++;
		}
		i = 0;
			printf("tab%d %d", tab[point], tab[pivot]);
		if (tab[point] > tab[pivot])
		{
			restart++;
		}
		swap(&tab[point], &tab[pivot]);
		pivot = point;
			printf("i%d po%d p%d ", i, point, pivot);
			printf("tab%d %d", tab[point], tab[pivot]);
	}
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
