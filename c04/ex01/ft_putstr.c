#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*print;

	print = str;
	while (*print)
	{
		write(1, print, 1);
		print++;
	}
}
