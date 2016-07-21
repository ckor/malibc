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
	int		nbrs[5] = {42, 1337, -42, 101, 404};
	int		*ret;
	t_list	**p;

	if ((p = malloc(sizeof(t_list*) * 5)) == NULL)
		return (0);
	*p = NULL;
	ft_list_push_front(p, &nbrs[0]);
	ft_list_push_front(p, &nbrs[1]);
	ft_list_push_front(p, &nbrs[2]);
	ft_list_push_front(p, &nbrs[3]);
	ft_list_push_front(p, &nbrs[4]);
	while ((*p) != NULL && (*p)->data != NULL)
	{
		ret = (*p)->data;
		ft_putnbr(*ret);
		ft_putchar('\n');
		(*p) = (*p)->next;
	}
	free(p);
	return (0);
}
