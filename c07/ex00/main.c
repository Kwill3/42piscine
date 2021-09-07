#include <stdio.h>
#include <unistd.h>

char	*ft_strdup(char *src);

int	main(void)
{
	int		i;
	char	*src;

	i = 0;
	src = ft_strdup("Hello 42KL Peeps!");
	while (src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
	write(1, &src[i], 1);
	//printf("%s\n", ft_strdup("Hello 42KL Peeps!"));
	return (0);
}
