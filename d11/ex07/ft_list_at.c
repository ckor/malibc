/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:30:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/19 12:37:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_list.h"

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*cursor;
	unsigned int	count;

	count = 1;
	cursor = begin_list;
	while ((cursor) && (nbr > count) && (cursor = cursor->next))
		++count;
	return (count == nbr && (cursor)) ? (cursor) : (NULL);
}
