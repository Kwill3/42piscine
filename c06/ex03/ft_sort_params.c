#include <unistd.h>

void	ft_swap(char *a[], char *b[]);

void	print(char *tab[]);

int		ft_strcmp(char *str1, char *str2);

void	bubble(int argc, char **argv);

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		bubble(argc, argv);
	}
	print(argv);
}

void	bubble(int argc, char **argv)
{
	int	i;
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		i = 1;
		while (i < count)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(&argv[i], &argv[i + 1]);
			i++;
		}
		count--;
	}
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

void	ft_swap(char *a[], char *b[])
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print(char *tab[])
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
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
