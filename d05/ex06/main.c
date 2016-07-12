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

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int	test;
	char	*out;

	if (argc > 2)
	{
		test = ft_strcmp(argv[1], argv[2]);
		out = ((test > 0)) ? ("42"): ("-42");
		ft_putstr(out);
	}
	return (0);
}
