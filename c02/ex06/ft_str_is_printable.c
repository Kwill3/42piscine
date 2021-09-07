#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			mark = 0;
		}
		i++;
	}
	return (mark);
}
