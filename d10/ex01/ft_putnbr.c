/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 03:14:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/10 08:00:17 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int			ft_isneg(int nbr)
{
	return (nbr < 0) ? (1) : (0);
}

void		ft_putnbr(int nbr)
{
	if (nbr < 0 && (nbr *= (-1)))
		ft_putchar('-');
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
