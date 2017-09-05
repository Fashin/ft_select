/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:12:45 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/05 16:04:16 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static int			check_first_maillon(t_list **list, char *name)
{
	t_file	*file;
	t_list	*tmp;

	file = ((t_file *)(*list)->content);
	if (!(ft_strcmp(file->name, name)))
	{
		tmp = *list;
		*list = (*list)->next;
		ft_lstdelone(&tmp, &free_my_list);
		print_list(*list);
		return (1);
	}
	return (0);
}

void				list_remove(t_list **list, char *name)
{
	t_list		*tmp;
	t_list		*del;
	t_file		*file;

	*list = down(*list);
	del = NULL;
	if (check_first_maillon(list, name))
		return ;
	tmp = *list;
	while (tmp->content)
	{
		if (tmp->next->content)
		{
			file = (t_file *)tmp->next->content;
			if (!(ft_strcmp(file->name, name)))
			{
				del = tmp->next;
				tmp->next = tmp->next->next;
			}
		}
		tmp = tmp->next;
	}
	(del) ? ft_lstdelone(&del, &free_my_list) : 1;
	print_list(*list);
}
