int	is_alp_num(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (j == 0 && (is_alp_num(str, i) == 2))
		{
			str[i] -= 'a' - 'A';
			j++;
		}
		else if (j != 0 && (is_alp_num(str, i) == 1))
		{
			str[i] += 'a' - 'A';
		}
		else if (is_alp_num(str, i) == 0)
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}

int	is_alp_num(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	else if (str[i] >= 'a' && str[i] <= 'z')
		return (2);
	else if (str[i] >= '0' && str[i] <= '9')
		return (3);
	else
		return (0);
}
