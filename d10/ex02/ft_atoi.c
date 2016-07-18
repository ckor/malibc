/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 03:14:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/10 08:00:17 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

unsigned int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9') ? (1) : (0);
}

int				ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
		c == '\r' || c == '\f' || c == '\v') ? (1) : (0);
}

int				ft_atoi(char *str)
{
	int s;
	int n;

	n = 0;
	while (ft_isspace(*str))
		str = str + 1;
	s = (*str == '-') ? (-1) : (1);
	str = str + (*str ==  '-' || *str == '+');
	while ((ft_isdigit(*str)) && (n = 10 * n + (*str - '0')))
		str = str + 1;
	return (s * n);
}
