/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 03:14:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/12 16:13:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../includes/libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1) && (*s2) && (*s1 == *s2))
	{
	  s1++;
	  s2++;
	}
	return ((*s1) - (*s2));
}
