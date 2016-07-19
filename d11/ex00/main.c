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
#include "ft_list.h"

void		test(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac && *(av + i))
	{
		ft_putstr(*(av + i));
		if ((++i) != ac)
			ft_putchar('\n');
	}
}

int			main(void)
{
	int		nbr;
	int		*dat;
	int		*ret;
	t_list	*p;

	nbr = 42;
	dat = &nbr;
	p = ft_create_elem(dat);
	if (p != NULL)
		if (p->data != NULL)
		{
			ret = p->data;
			ft_putnbr(*ret);
		}
	return (0);
}
