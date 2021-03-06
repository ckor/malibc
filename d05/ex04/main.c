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

int		ft_atoi(char *str);

void		ft_putstr(char *str);

char		*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(int argc, char **argv)
{
	char	tab[5];
	int	cnbr;

	if (argc > 2)
	{
		cnbr = ft_atoi(argv[2]);
		ft_strncpy((char*)&tab, argv[1], cnbr);
		ft_putstr((char*)&tab);
	}
	return (0);
}
