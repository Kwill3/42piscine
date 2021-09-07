#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * diff);
	if (*range == NULL)
		return (-1);
	else
	{
		while (i < diff)
		{
			*(*range + i) = min + i;
			i++;
		}
	}
	return (diff);
}
