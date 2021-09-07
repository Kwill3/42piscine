int	ft_iterative_factorial(int nb)
{
	int	retval;

	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
	{
		retval = 1;
		while (nb > 1)
			retval *= nb--;
		return (retval);
	}
}
