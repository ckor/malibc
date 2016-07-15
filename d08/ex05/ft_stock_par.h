/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 04:58:01 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 07:11:07 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_STOCK_PAR_H
# define	FT_STOCK_PAR_H

# include	<unistd.h>
# include	<stdlib.h>

typedef struct  s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char        **tab;
}				t_stock_par;

struct s_stock	*ft_param_to_tab(int ac, char **av);
void			ft_show_tab(struct s_stock_par *par);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);
char			**ft_split_whitespaces(char *str);
char			*ft_strdup(char *src);

#endif
