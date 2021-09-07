#include <unistd.h>

void	quicksort(int *tab, int low, int high);

void	partition(int *tab, int low, int high, int *pi);

void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	low;
	int	high;

	low = 0;
	high = size - 1;
	quicksort(tab, low, high);
}

// Gets partition index from function and runs recursively according to pi
void	quicksort(int *tab, int low, int high)
{
	int	pi;

	if (low < high)
	{
		partition(tab, low, high, &pi);
		quicksort(tab, low, pi - 1);
		quicksort(tab, pi + 1, high);
	}
}

// Sorts the numbers using pivot and sets partition index
void	partition(int *tab, int low, int high, int *pi)
{
	int	pivot;
	int	i;
	int	point;

	pivot = high;
	i = low;
	point = low - 1;
	while (i <= high - 1)
	{
		if (tab[i] <= tab[pivot])
		{
			point++;
			swap(&tab[i], &tab[point]);
		}
		i++;
	}
	swap(&tab[point + 1], &tab[high]);
	*pi = point + 1;
}

// Swaps the ints by pointer
void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
