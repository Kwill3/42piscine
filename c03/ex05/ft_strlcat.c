unsigned int	str_size(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = str_size(dest);
	if (size <= count || size == 0)
		return (size + str_size(src));
	while (src[i] != '\0' && count + i < size - 1)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (count + str_size(src));
}

unsigned int	str_size(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
