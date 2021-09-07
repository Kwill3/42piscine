#include <stdlib.h>

int		whole_len(int size, char **strs, char *sep);

char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*whole;
	char	*dup;

	i = 0;
	j = whole_len(size, strs, sep);
	whole = (char *)malloc(sizeof(char) * j);
	if (size == 0)
	{
		*whole = 0;
		return (whole);
	}
	dup = whole;
	while (i < size)
	{
		dup = ft_strcat(dup, strs[i]);
		if (i < size - 1)
		{
			dup = ft_strcat(dup, sep);
		}
		i++;
	}
	dup[j] = '\0';
	return (whole);
}

int	whole_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	len += (i * (size - 1));
	len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (*src == '\0')
		return (dest);
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
