#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *range;
	int range_size;

	range_size = ft_ultimate_range(&range, -10, 42);
	printf("Range size = %d\n", range_size);
	if (!range)
	{
		printf("Pointer set to NULL.\n");
		return (0);
	}
	for (int i = 0; i < range_size; i++)
	{
		printf("%d ", range[i]);
	}
	return (0);
}
