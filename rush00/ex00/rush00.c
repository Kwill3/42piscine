void	ft_putchar(char c);

// prints "o" at both sides of head/ tail, '-' in between
void	ft_head_or_tail(char corner, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0 || i == len - 1)
			ft_putchar(corner);
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

// prints "|" at both sides of the row, prints spaces in between
void	ft_print_body(int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0 || i == len - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

// loops selected print functions if x or y is not 0
void	rush(int x, int y)
{
	int	row;

	row = 0;
	if (x != 0 && y != 0)
	{
		while (row < y)
		{	
			if (row == 0 || row == y - 1)
				ft_head_or_tail('o', x);
			else
				ft_print_body(x);
			row++;
		}
	}
}
