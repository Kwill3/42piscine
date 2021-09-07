#include <unistd.h>

//global variable
int	g_solution;

// print a solution
void	print_solution(int	*arr)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

// check whether the existing queens can attack position (row, col)
// Return 1 if safe, 0 otherwise.
// 0th column position is always safe.
int	check_constraint(int *arr, int col, int row)
{
	int	enemy_col;
	int	enemy_row;

	if (col == 0)
		return (1);
	enemy_col = 0;
	while (enemy_col < col)
	{
		enemy_row = arr[enemy_col];
		if (enemy_row == row)
			return (0);
		if (enemy_row + enemy_col == row + col)
			return (0);
		if (enemy_row - enemy_col == row - col)
			return (0);
		enemy_col++;
	}
	return (1);
}

// backtrack, given a partial solution arr and search from column onwards
void	backtrack(int *arr, int col)
{
	int	row;

	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			if (check_constraint(arr, col, row) == 1)
			{
				arr[col] = row;
				backtrack(arr, col + 1);
			}
			row++;
		}
		arr[col] = 0;
		return ;
		col++;
	}
	print_solution(arr);
	g_solution++;
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	col;

	col = 0;
	g_solution = 0;
	backtrack(arr, col);
	return (g_solution);
}
