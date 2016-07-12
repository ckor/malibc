void		ft_putstr(char *str);

char		*ft_strlowcase(char *str);

int		main(int argc, char **argv)
{
	char *str;

	if (argc > 1)
	{
		str = ft_strlowcase(argv[1]);
		ft_putstr(str);
	}
	return (0);
}
