#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	j;

	i = nb;
	j = power;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		if (j > 0)
			i *= ft_recursive_power(nb, j - 1);
		return (i);
	}
}
