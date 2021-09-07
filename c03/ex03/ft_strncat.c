char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (dest[count])
	{
		count++;
	}
	while (src[i] && i < nb)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
