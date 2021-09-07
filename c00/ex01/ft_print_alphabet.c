#include <unistd.h>

void	ft_print_alphabet (void)
{
	char	alphabet;

	alphabet = 'a';
	while (1)
	{
		write(1, &alphabet, 1);
		if (alphabet == 'z')
		{
			break ;
		}
		alphabet++;
	}
}
