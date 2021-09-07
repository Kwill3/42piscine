#include <unistd.h>

// Prints combination in order of k-j-i
void	write_comb(char i, char j, char k)
{
	write(1, &k, 1);
	write(1, &j, 1);
	write(1, &i, 1);
}

// Runs print function if no duplicate of numbers and in ascending order
void	check_comb(char i, char j, char k)
{
	if (i == '9' && j == '8' && k == '7')
	{
		write_comb(i, j, k);
	}
	else if ((i != j && i != k && j != k) && (k < j && j < i))
	{
		write_comb(i, j, k);
		write(1, ", ", 2);
	}
}

// Loops the increment of i-j-k to cover 000 to 999
void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '0';
	k = '0';
	while (k <= '9')
	{
		while (j <= '9')
		{
			while (i <= '9')
			{
				check_comb(i, j, k);
				i++;
			}
			i = '0';
			j++;
		}
		j = '0';
		k++;
	}
}
