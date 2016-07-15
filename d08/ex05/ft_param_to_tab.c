/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 05:00:43 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 07:12:43 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include				"ft_stock_par.h"

int						ft_strlen(char *str)
{
	int			len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char					*ft_strdup(char *src)
{
	int			len;
	int			i;
	char		*ret;

	len = ft_strlen(src);
	ret = (char*)malloc(sizeof(*ret) * (len + 1));
	i = 0;
	while (i < len)
	{
		ret[i] = src[i];
		i++;
	}
	return (ret);

}

struct s_stock			*ft_param_to_tab(int ac, char **av)
{
	struct s_stock		*ret;
	int					i;

	if ((ret = (struct s_stock *)malloc(sizeof(t_stock_par) * (ac + 1))) != NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ret[i].size_param	= ft_strlen(av[i]);
		ret[i].str			= av[i];
		ret[i].copy			= ft_strdup(av[i]);
		ret[i].tab			= ft_split_whitespaces(av[i]);
		i++
	}
	ret[i].str = 0;
	return (ret);
}
