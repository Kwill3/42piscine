#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[] = "Hello 42 peeps!";
	char	*ptr;

	ptr = str;
	printf("%s\n", str);
	ft_putstr(ptr);
}
