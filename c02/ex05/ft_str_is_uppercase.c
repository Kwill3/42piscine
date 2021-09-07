#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			mark = 0;
		}
		i++;
	}
	return (mark);
}
