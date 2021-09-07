#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			mark = 0;
		}
		i++;
	}
	return (mark);
}
