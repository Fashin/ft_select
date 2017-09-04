/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrow_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:17:14 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/04 18:36:20 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

t_list			*up(t_list *list)
{
	printf("i'm the up arrow function\n");
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
	print_list(ret);
	return (ret);
}

t_list			*space(t_list *list)
{
	printf("Hi, i'm the space bar\n");
	return (list);
}
