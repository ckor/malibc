/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

char		**ft_args_to_wordtab(char **av, int ac)
{
	char	**ret;
	int		i;

	ft_putstr("kek\n");
	i = 1;
	if ((ret = malloc(sizeof(char**) * (ac))) == NULL)
		return (NULL);
	while (i < (ac - 1))
	{
		ft_putnbr(ft_strlen(ret[i - 1] + 1));
		ft_putchar('\n');
		ft_putstr("kek\n");
		if ((ret[i - 1] = malloc(sizeof(char*) * ft_strlen(ret[i - 1] + 1))) == NULL)
			return (NULL);
		ret[i - 1] = av[i];
		i++;
	}
	*(ret + i - 1) = '\0';
	return (ret);
}

void		ft_print_number(int nbr)
{
	ft_putnbr(nbr);
	ft_putchar('\n');
}

int			ft_magic_string(char *str)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	while (i < len - 1)
	{
		if (str[i] % 2)
			str[i] = '\1';
		i++;
	}
	return ('\0');
}

int			main(int ac, char **av)
{
	char	**args;

	args = NULL;
	if (ac > 1)
	{
		args = ft_args_to_wordtab(av, ac);
		if (ft_any(args, &ft_magic_string))
			ft_putstr("42!\n");
		else
			ft_putstr("-42!\n");
	}
	return (0);
}
