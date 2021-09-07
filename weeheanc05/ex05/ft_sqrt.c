int	ft_sqrt(int nb)
{
	int	start;
	int	next;

	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (nb);
	else
	{
		start = nb / 2;
		next = start / 2 + nb / start / 2;
		while (!(start - next == 1 || start == next))
		{
			start = next;
			next = start / 2 + nb / start / 2;
		}
		start++;
		while (start * start > nb)
			start--;
		if (start * start == nb)
			return (start);
		else
			return (0);
	}
}
