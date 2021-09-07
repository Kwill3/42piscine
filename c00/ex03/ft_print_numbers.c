#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (1)
	{
		write(1, &number, 1);
		if (number == '9')
		{
			break ;
		}
		number++;
	}
}
