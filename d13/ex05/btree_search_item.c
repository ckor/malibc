/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzafati <wzafati@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 10:38:16 by wzafati           #+#    #+#             */
/*   Updated: 2016/07/18 10:38:18 by wzafati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void				*btree_search_item(t_btree *root, void *data_ref,
										int (*cmpf)(void *, void *))
{
	t_btree			*ret;

	ret = NULL;
	if (root == NULL)
		return (NULL);
	if (root->left != NULL)
		ret = btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (root->right != NULL)
		ret = btree_search_item(root->right, data_ref, cmpf);
	return (ret);
}
