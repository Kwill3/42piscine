int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i) && i < 2147483647)
	{
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 2;
	i = nb / 2;
	while (j <= i)
	{
		if (nb % j == 0)
			return (0);
		j++;
	}
	return (1);
}
