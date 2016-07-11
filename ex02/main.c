#include <stdio.h>
#include "ft_atoi.c"

int	main(int argc, char **argv)
{
	int nbr = 0;

	if (argc > 1)
		nbr = ft_atoi(argv[1]);
	printf("%d", nbr);
	return (0);
}