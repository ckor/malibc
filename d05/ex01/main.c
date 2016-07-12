void	ft_putnbr(int nbr);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int nbr = 0;

	if (argc > 1)
		nbr = ft_atoi(argv[1]);
	ft_putnbr(nbr);
	return (0);
}
