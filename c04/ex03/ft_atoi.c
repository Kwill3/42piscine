#include <unistd.h>

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	base;

	count = 0;
	sign = 1;
	base = 0;
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		base = (base * 10) + (str[count] - '0');
		count++;
	}
	base *= sign;
	return (base);
}
