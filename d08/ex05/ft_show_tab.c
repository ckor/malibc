/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 05:00:59 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 06:59:22 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include			"ft_stock_par.h"

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void			ft_putnbr(int n)
{
	if (n < 0 && (n = -(n)))
		ft_putchar('-');
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar('0' + (n % 10));
}

void			ft_print_wordtab(char **tab)
{
	int			i;

	i = 0;
	while (tab && tab[i])
		ft_putstr(tab[i++]);
	ft_putchar('\n');
}

void			ft_show_tab(struct s_stock_par *par)
{
    int			i;

    i = 0;
    while (par[i].str)
    {
	ft_putstr(par[i].copy);
	ft_putchar('\n');
	ft_putnbr(par[i].size_param);
	ft_putchar('\n');
	ft_print_wordtab(par[i].tab);
	++i;
    }
}
