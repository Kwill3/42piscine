void	ft_putchar(char c);

// print first at the left, last at the right, 'B' in between
void	ft_head_or_tail(char first, char last, int len)
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

// print 'B' at both sides, spaces in between
void	ft_print_body(int len)
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

/* loops selected print functions if x or y is not 0*/
void	rush(int x, int y)
{
	int	row;

	row = 0;
	if (x != 0 && y != 0)
	{
		while (row < y)
		{	
			if (row == 0)
				ft_head_or_tail('A', 'C', x);
			else if (row == y - 1)
				ft_head_or_tail('C', 'A', x);
			else
				ft_print_body(x);
			row++;
		}
	}
}
