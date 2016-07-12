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

void		ft_putchar(char c);

int		ft_isneg(int nbr)
{
	return (nbr < 0) ? (1) : (0);
}

void		ft_putnbr_rec(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr_rec(nbr / 10);
		ft_putnbr_rec(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

void		ft_putnbr(int nbr)
{
	if (ft_isneg(nbr))
	{
		ft_putchar('-');
		nbr = (-1) * nbr;
	}
	ft_putnbr_rec(nbr);
}
