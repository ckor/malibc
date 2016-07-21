/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:34:40 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:34:44 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int			*ft_map(int *tab, int length, int(*f)(int p))
{
	int		i;
	int		*ret;

	i = 0;
	if ((ret = malloc(sizeof(*tab) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
