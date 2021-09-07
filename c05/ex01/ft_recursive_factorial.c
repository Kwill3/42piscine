#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		if (i > 0)
			nb *= ft_recursive_factorial(i - 1);
		return (nb);
	}
}
