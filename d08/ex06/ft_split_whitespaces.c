/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <wzafati@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:59:22 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/14 16:59:25 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_stock_par.h"

int		ft_is_delimiter(char c)
{
    return (c == ' ' || c == '\0' || c == '\t' || c == '\n');
}

int		ft_len_word(char *str, int i)
{
    int		count;

    count = 0;
    while (!ft_is_delimiter(str[i]))
    {
	count++;
	i++;
    }
    return (count);
}

int		ft_count_words(char *str)
{
    int		words;
    int		i;

    words = 0;
    i = 0;
    while (str[i] && str[i++])
    {
	if (ft_is_delimiter(str[i]))
	{
	    while (ft_is_delimiter(str[i]) && str[i + 1])
		i++;
	    if (str[i])
		words++;
	}
	
    }
    return (i);
}

char		**ft_split_whitespaces(char *str)
{
    char	**ret;
    int		a;
    int		b;
    int		c;

    a = 0;
    b = 0;
    if ((ret = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1))) == NULL)
	return (NULL);
    while (str[a])
    {
	while (ft_is_delimiter(str[a]) && str[a])
	    a++;
	if (str[a])
	{
	    c = 0;
	    if ((ret[b] = (char*)malloc(sizeof(char) * ft_len_word(str, a) + 1)) == NULL)
		return (NULL);
	    while (!ft_is_delimiter(str[a]) && str[a])
		ret[b][c++] = str[a++];
	    ret[b++][c] = '\0';
	}
    }
    ret[b] = 0;
    return (ret);
}
