#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*tab;
	int	i;

	i = 0;
	diff = max - min;
	if (diff <= 0)
		return (0);
	tab = (int *)malloc(sizeof(int) * diff);
	if (tab == NULL)
		return (0);
	else
	{
		while (i < diff)
		{
			*(tab + i) = min + i;
			i++;
		}
	}
	return (tab);
}
