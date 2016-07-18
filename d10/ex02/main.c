/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int			*ft_args_to_inttab(char **av, int ac)
{
	int		*tab;
	int		i;

	i = 1;
	if ((tab = malloc(sizeof(*tab) * (ac - 1))) == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i - 1] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}

void		ft_print_number(int nbr)
{
	ft_putnbr(nbr);
	ft_putchar('\n');
}

int			ft_is_pair(int nbr)
{
	return (nbr % 2) ? (-42) : (42);
}

int			main(int ac, char **av)
{
	int		*tab;

	if (ac > 1)
	{
		tab = ft_args_to_inttab(av, ac);
		tab = ft_map(tab, (ac - 1), &ft_is_pair);
		ft_foreach(tab, (ac - 1), &ft_print_number);
	}
	return (0);
}
