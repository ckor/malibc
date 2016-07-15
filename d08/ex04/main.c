/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 04:43:30 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 04:45:11 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ft_point.h"

void		set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int			main(void)
{
	t_point			point;
	set_point(&point);
	return (0);
}
