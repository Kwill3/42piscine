#include <unistd.h>

void	print(char c);

void	ft_putnbr(int nb)
{
	unsigned int	uns_i;

	uns_i = 0;
	if (nb < 0)
	{
		print('-');
		uns_i = (unsigned int)(nb * -1);
	}
	else
		uns_i = (unsigned int)nb;
	if (uns_i < 10)
	{
		print(uns_i + '0');
		return ;
	}
	else
		ft_putnbr(uns_i / 10);
	ft_putnbr(uns_i % 10);
}

void	print(char c)
{
	write(1, &c, 1);
}
