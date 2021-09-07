#include <unistd.h>
#include "ft_stock_str.h"

void	print(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	ac;

	i = 0;
	ac = 0;
	while (par[ac].str)
		ac++;
	while (i < ac)
	{
		ft_putstr(par[i].str);
		print('\n');
		ft_putnbr(par[i].size);
		print('\n');
		ft_putstr(par[i].copy);
		print('\n');
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print(str[i]);
		i++;
	}
}

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
