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

void		ft_list_delete(t_list **list)
{
	ft_list_clear(list);
	free(list);
}

int			main(int ac, char **av)
{
	t_list	*list;
	t_list	*last;
	char	*str;
	int		len;

	if (ac <= 1)
	{
		ft_putstr("Error:\nUsage: ");
		ft_putstr(av[0]);
		ft_putstr(" [Arg 1] [Arg ...]\n");
		return (0);
	}

	if ((list = ft_list_push_params(ac, av)) == NULL)
		return (0);

	ft_list_print_all(list);

	len = ft_list_size(list);
	ft_putchar('\n');
	ft_putstr("list length: ");
	ft_putnbr(len);
	ft_putchar('\n');

	last = ft_list_last(list);
	str = last->data;
	ft_putstr("last value: ");
	ft_putstr(str);
	ft_putchar('\n');

	ft_list_clear(&list);
	len = ft_list_size(list);
	ft_putchar('\n');
	ft_putstr("list length: ");
	ft_putnbr(len);
	ft_putchar('\n');

	ft_list_delete(&list);
	return (0);
}
