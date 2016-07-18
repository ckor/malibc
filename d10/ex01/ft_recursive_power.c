/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 12:15:57 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 12:16:02 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int			ft_recursive_power(int nb, int power)
{
	return (power > 0) ? (nb = nb * ft_recursive_power(nb, --power )) : (0);
}
