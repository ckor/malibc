/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:59:22 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 06:52:40 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_param_to_tab.h"

int				main(int argc, char **argv)
{
    t_stock_par	*stock;

	if (stock = ft_param_to_tab(argc, argv))
	{
		ft_show_tab(stock);
		free(stock);
	}
    return (0);
}
