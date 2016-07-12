/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 03:14:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/10 08:00:17 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putstr(char *str);

char		*ft_strcpy(char *dest, char *src);

int		main(int argc, char **argv)
{
	char	tab[5];
	if (argc > 1)
	{
		ft_strcpy((char*)&tab, argv[0]);
		ft_putstr((char*)&tab);
	}
	return (0);
}
