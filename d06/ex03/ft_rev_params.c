/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:09:33 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/14 22:16:57 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int			main(int argc, char **argv)
{
	int		i;

	i = (argc - 1);
	while (argc > 1 && i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
