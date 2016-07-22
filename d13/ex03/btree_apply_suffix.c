/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void				btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->item != NULL && (*applyf) != NULL)
	{
		btree_apply_suffix(root->left, (*applyf));
		btree_apply_suffix(root->right, (*applyf));
		(*applyf)(root);
	}
}
