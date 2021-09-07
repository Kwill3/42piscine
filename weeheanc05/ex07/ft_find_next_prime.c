// Return the floor(sqrt(nb)) of a number.
int	floor_sqrt(int nb)
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
		{
			start--;
		}
		return (start);
	}
}

int	ft_is_prime(int nb)
{
	int	sqrt;

	if (nb < 2)
		return (0);
	else if (nb < 4)
		return (1);
	else if (!(nb % 6 == 1 || nb % 6 == 5))
		return (0);
	else
	{
		sqrt = floor_sqrt(nb);
		while (sqrt >= 2)
		{
			if (nb % sqrt == 0)
				return (0);
			sqrt--;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
