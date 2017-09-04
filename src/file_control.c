/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:53:13 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/02 16:58:09 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

t_list		*get_actual(t_list *list)
{
	while (list->content)
	{
		if (((t_file *)list->content)->is_actual)
			return (list);
		list = list->next;
	}
	return (NULL);
}
