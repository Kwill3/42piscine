#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int	i;

	i = 0;
	int *range = ft_range(-5, 5);
	if (range == NULL)
	{
		printf("NULL pointer has been returned.\n");
		return (0);
	}
	while (i < 10)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}
