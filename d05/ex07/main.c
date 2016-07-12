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

int		ft_strncmp(char *s1, char *s2, int n);

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int	test;
	char	*out;
	int	args;

	if (argc > 2)
	{
		args = ft_atoi(argv[3]);
		test = ft_strncmp(argv[1], argv[2], args);
		if (!test)
		  out = "42";
		else
			out = ((test > 0)) ? ("+42") : ("-42");
		ft_putstr(out);
	}
	return (0);
}
