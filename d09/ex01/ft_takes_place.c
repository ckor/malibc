/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 08:52:27 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/15 09:11:15 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void		ft_takes_place(int hour)
{
	int		hr;

	hr = hour;
	if (hour > 12)
		hr = hour % 12;
	if (!hour)
		hr = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ")
	if (hr < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hr, (hr + 1) % 12);
	else if (hr == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hr == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", hr, (hr + 1) % 12);
}
