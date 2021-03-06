/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrow_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:17:14 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/06 23:59:55 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

t_list			*up(t_list *list)
{
	t_list		*ret;

	ret = list;
	if (((t_file *)list->content)->is_actual)
	{
		((t_file *)list->content)->is_actual = 0;
		list = get_last(list);
		((t_file *)list->content)->is_actual = 1;
	}
	while (list->content)
	{
		if (list->next->content && ((t_file *)list->next->content)->is_actual)
		{
			((t_file *)list->next->content)->is_actual = 0;
			((t_file *)list->content)->is_actual = 1;
		}
		list = list->next;
	}
	list = ret;
	print_list();
	return (list);
}

t_list			*down(t_list *list)
{
	t_list		*ret;

	ret = list;
	while (list->content)
	{
		if (((t_file *)list->content)->is_actual)
		{
			((t_file *)list->content)->is_actual = 0;
			list = (list->next->content) ? list->next : ret;
			((t_file *)list->content)->is_actual = 1;
		}
		list = list->next;
	}
	list = ret;
	print_list();
	return (list);
}

t_list			*space(t_list *list)
{
	t_list		*ret;

	ret = list;
	while (list->content)
	{
		if (((t_file *)list->content)->is_actual)
		{
			if (((t_file *)list->content)->is_selected)
				((t_file *)list->content)->is_selected = 0;
			else
				((t_file *)list->content)->is_selected = 1;
		}
		list = list->next;
	}
	list = ret;
	list = down(list);
	print_list();
	return (list);
}
