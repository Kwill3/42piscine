int	ft_iterative_power(int nb, int power)
{
	int	retval;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		retval = nb;
		while (power-- > 1)
			retval *= nb;
		return (retval);
	}
}
