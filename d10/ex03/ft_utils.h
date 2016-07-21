/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 12:20:19 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 12:20:21 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H
# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
unsigned int	ft_isdigit(char c);
int				ft_isneg(int nbr);
int				ft_isspace(char c);
int				ft_atoi(char *str);
void			ft_putnbr(int nbr);
char			*ft_strdup(char *src);
void			ft_foreach(int *tab, int length, void(*f)(int));
int				*ft_map(int *tab, int length, int(*f)(int));
int				ft_any(char **tab, int(*f)(char*));
#endif
