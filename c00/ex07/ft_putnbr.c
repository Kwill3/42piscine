#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	negative(int nb, int place_arr[8], int count_arr)
{
	print('-');
	while (nb <= -10)
	{
		place_arr[count_arr] = nb % 10;
		nb = nb / 10;
		count_arr++;
	}
	place_arr[count_arr] = nb;
	while (count_arr > -1)
	{
		print((place_arr[count_arr] * -1 + '0'));
		count_arr--;
	}
}

void	positive(int nb, int place_arr[8], int count_arr)
{
	while (nb >= 10)
	{
		place_arr[count_arr] = nb % 10;
		nb = nb / 10;
		count_arr++;
	}
	place_arr[count_arr] = nb;
	while (count_arr > -1)
	{
		print((place_arr[count_arr] + '0'));
		count_arr--;
	}
}

void	ft_putnbr(int nb)
{
	int	place_arr[8];
	int	count_arr;

	count_arr = 0;
	if (nb < 0)
	{
		negative(nb, place_arr, count_arr);
	}
	else
	{
		positive(nb, place_arr, count_arr);
	}
}
