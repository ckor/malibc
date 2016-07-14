/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 16:59:22 by marvin            #+#    #+#             */
/*   Updated: 2016/07/14 16:59:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char		*ft_strdup(char *src)
{
    char	*ret;
    int		len;
    int		i;

    i = 0;
    if (!src)
	return (NULL);
    len = ft_strlen(src);
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
	return (NULL);
    while (src[i])
    {
	ret[i] = src[i];
	i++;
    }
    ret[len] = '\0';
    return (ret);
}
