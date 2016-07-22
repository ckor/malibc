/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree					*btree_create_node(void *item)
{
	t_btree				*btree_new_node;

	btree_new_node = NULL;
	btree_new_node = malloc(sizeof(t_btree));
	if (btree_new_node != NULL)
	{
		btree_new_node->item = item;
		btree_new_node->left = NULL;
		btree_new_node->right = NULL;
	}
	return (btree_new_node);
}
