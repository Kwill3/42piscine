#include <unistd.h>

void	base_system(int n, int nbr, char *base);

int		check_base(int n, char *str);

int		ft_strlen(char *str);

void	print(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = ft_strlen(base);
	if (check_base(n, base) != 0)
	{
		if (nbr < 0)
		{
			nbr *= -1;
			print('-');
		}
		base_system(n, nbr, base);
	}
}

void	base_system(int n, int nbr, char *base)
{
	if (nbr >= n)
	{
		base_system(n, nbr / n, base);
		base_system(n, nbr % n, base);
	}
	if (nbr < n)
		print(base[nbr]);
}

int	check_base(int n, char *str)
{
	int	i;
	int	j;

	i = 0;
	if (n == 0 || n == 1)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	print(char c)
{
	write(1, &c, 1);
}
