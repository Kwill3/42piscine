#include <stdlib.h>
#include "ft_stock_str.h"

int		ft_strlen(char	*str);

char	*ft_strdup(char *src);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc((sizeof(t_stock_str) * (ac + 1)));
	if (tab == NULL)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (str);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
