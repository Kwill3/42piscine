#include <unistd.h>

void	ft_swap(char *a, char *b);

void	print(char *tab[]);

int	ft_strcmp(char *str1, char *str2);

int	main(int argc, char **argv)
{
	int		i;
	char	*tab[200];
	int		count;

	i = 1;
	count = argc - 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			tab[i - 1] = argv[i];
			i++;
		}
		while (count > 0)
		{
			i = 0;
			while (i < count - 1)
			{
				if (ft_strcmp(tab[i], tab[i + 1]) > 0)
					ft_swap(tab[i], tab[i + 1]);
				i++;
			}
			count--;
		}
	}
	print(tab);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] - str2[i] != 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	char	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void	print(char *tab[])
{
	int	i;
	int	j;

	i = 0;
	while(tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
