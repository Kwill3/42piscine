void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("\eThis\vis\fa\rtest\tfile\n");
	return (0);
}
