char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		count = 0;
		while ((to_find[count] == str[i + count]) && str[i + count])
		{
			if (to_find[count + 1] == '\0')
			{
				return (&str[i]);
			}
			count++;
		}
		i++;
	}
	return (0);
}
