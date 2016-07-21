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

t_list		**ft_list_new(unsigned int size)
{
	t_list	**list;

	list = malloc(sizeof(t_list*) * (size));
	*list = NULL;
	return (list);
}

void		ft_list_load_from_arg(int ac, char **av, t_list **list)
{
	int		i;

	i = 1;
	while (i < ac && *(av + i))
		ft_list_push_back(list, *(av + i++));
}

void		ft_list_print_all(t_list *list)
{
	t_list	*cursor;
	char	*str;

	cursor = list;
	while (cursor)
	{
		str = cursor->data;
		ft_putstr(str);
		ft_putchar('\n');
		cursor = cursor->next;
	}
}

int			main(int ac, char **av)
{
	t_list	**list;
	int		len;

	if (ac <= 1)
	{
		ft_putstr("Error: usage: ");
		ft_putstr(av[0]);
		ft_putstr(" [Arg 1] [Arg ...]\n");
		return (0);
	}
	if ((list = ft_list_new(ac - 1)) == NULL)
		return (0);
	ft_list_load_from_arg(ac, av, list);
	ft_list_print_all(*list);
	len = ft_list_size(*list);
	ft_putchar('\n');
	ft_putnbr(len);
	ft_putchar('\n');
	free(list);
	return (0);
}
