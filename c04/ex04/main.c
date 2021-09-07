void	ft_putnbr_base(int nbr, char *base);

int main (void)
{
	ft_putnbr_base(42, "");
	ft_putnbr_base(42, "KO");
	ft_putnbr_base(-126, "p");
	ft_putnbr_base(38, "Fail+");
	ft_putnbr_base(38, "Faill");
	ft_putnbr_base(-401333, "sSuce!");
	ft_putnbr_base(3456789, "Con Grats!");
}
