#include <unistd.h>

void	unprintable(char num);

void	print(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			unprintable(str[i]);
		else
			print(str[i]);
		i++;
	}
}

void	unprintable(char num)
{
	print('\\');
	if (num < 16)
		print('0');
	else
	{
		print(num / 16 + 48);
		num %= 16;
	}
	if (num > 9)
		print(num % 10 + 97);
	else
		print(num + 48);
}

void	print(char c)
{
	write(1, &c, 1);
}
