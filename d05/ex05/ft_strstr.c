/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 03:14:17 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/12 16:13:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *tofind)
{
	int		i;
	int		match;
	char		*sptr;

	i = 0;
	match = 0;
	sptr = tofind;
	while (str[i] && (!match))
	{
		if (str[i] != *tofind)
			tofind = sptr;
		else
		{
			if (*(tofind + 1) != '\0')
				tofind++;
			else
			{
				match = 42;
				tofind = sptr;
			}
		}
		i++;
	}
	return (match) ? (str) : (0);
}
