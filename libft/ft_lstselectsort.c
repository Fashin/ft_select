/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstselectsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 15:26:42 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/06/22 16:10:06 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstselectsort(t_list *lst, int (*cmp)(void *, void *))
{
	t_list		*cur1;
	t_list		*cur2;
	t_list		tmp;

	cur1 = lst;
	while (cur1->content)
	{
		cur2 = cur1->next;
		while (cur2->content)
		{
			if (cmp(cur1->content, cur2->content) == 0)
			{
				tmp.content = cur2->content;
				cur2->content = cur1->content;
				cur1->content = tmp.content;
			}
			cur2 = cur2->next;
		}
		cur1 = cur1->next;
	}
	return (lst);
}
