/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 04:12:37 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 04:12:45 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_BOOLEAN_H
# define	FT_BOOLEAN_H
# include	<unistd.h>
# define	EVEN(x) x % 2 == 0
# define	TRUE		1
# define	FALSE		0
# define	SUCCESS		0
# define	EVEN_MSG	"I have an even number of arguments."
# define	ODD_MSG		"I have an odd number of arguments."
typedef		int		t_bool;
#endif
