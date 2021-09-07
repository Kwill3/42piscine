int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 2;
	i = nb / 2;
	if (nb < 2)
		return (0);
	else
	{
		while (j <= i)
		{
			if (nb % j == 0)
				return (0);
			j++;
		}
	}
	return (1);
}
