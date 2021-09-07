#include <unistd.h>

int	check_str(char *base, char str);

int	check_base(char *base);

int	power(int x, int y);

int	convert(int start, int count, char *str, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	count;
	int	sign;
	int	num_len;

	count = 0;
	sign = 1;
	num_len = 0;
	if (check_base(base) == 0)
		return (0);
	while (str[count] == ' ' || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (check_str(base, str[count + num_len]))
	{
		num_len++;
	}
	return (convert(num_len, count, str, base) * sign);
}

/* Get base length and use it to calc power to multiply base value*/
int	convert(int num_len, int count, char *str, char *base)
{
	int	b_len;
	int	res;

	b_len = 0;
	res = 0;
	while (base[b_len])
		b_len++;
	while (num_len)
	{
		res += (check_str(base, str[count]) - 1) * power(b_len, num_len - 1);
		num_len--;
		count++;
	}
	return (res);
}

/* Check and return value of char in base + 1 because 0 is null*/
int	check_str(char *base, char str)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	power(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (power(x, y - 1) * x);
}
