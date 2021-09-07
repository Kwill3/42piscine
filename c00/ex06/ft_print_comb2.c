#include <unistd.h>

// Prints combination in order of 'j i'
void	write_comb2(int i, int j)
{
	char	i_10;
	char	i_1;
	char	j_10;
	char	j_1;

	i_10 = (i / 10) + '0';
	i_1 = (i % 10) + '0';
	j_10 = (j / 10) + '0';
	j_1 = (j % 10) + '0';
	write(1, &j_10, 1);
	write(1, &j_1, 1);
	write(1, " ", 1);
	write(1, &i_10, 1);
	write(1, &i_1, 1);
}

// Runs print function if no duplicate of numbers and in ascending order
void	check_comb2(int i, int j)
{
	if (i == 99 && j == 98)
	{
		write_comb2(i, j);
	}
	else if (i != j && j < i)
	{
		write_comb2(i, j);
		write(1, ", ", 2);
	}
}

// Loops the increment of i-j to cover 00 00 to 99 99
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j <= 99)
	{
		while (i <= 99)
		{
			check_comb2(i, j);
			i++;
		}
		i = 0;
		j++;
	}
}
