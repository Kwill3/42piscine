void	ft_putchar(char c);

// Prints horizontal from A to B to C
void	ft_horizontal(char first, char last, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0)
			ft_putchar(first);
		else if (i == len - 1)
			ft_putchar(last);
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

// Prints vertical Bs with spaces in between
void	ft_vertical(int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0 || i == len - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

// Loops selected print functions if x or y are not 0
void	rush(int x, int y)
{
	int	row;

	row = 0;
	if (x != 0 && y != 0)
	{
		while (row < y)
		{	
			if (row == 0 || row == y - 1)
				ft_horizontal('A', 'C', x);
			else
				ft_vertical(x);
			row++;
		}
	}
}
