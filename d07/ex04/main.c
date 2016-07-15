/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:59:22 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/14 16:59:25 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_count_words(char *str);

char		**ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
    char	**wordtab;
    int		i;

    i = 0;
    if (argc > 1)
    {
	if ((wordtab = ft_split_whitespaces(argv[1])) != NULL)
	{
	    while (wordtab[i])
	    {
		ft_putstr(wordtab[i]);
		ft_putchar('\n');
		i++;
	    }
	    free(wordtab);
	}
    }
    return (0);
}
