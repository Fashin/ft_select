/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:53:13 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/04 22:09:48 by cbeauvoi         ###   ########.fr       */
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

t_list		*get_last(t_list *list)
{
	while (list->next->content)
		list = list->next;
	return (list);
}

int			ft_pointchar(int c)
{
	write(STDIN_FILENO, &c, 1);
	return (0);
}

void		clean_screen(void)
{
	tputs(tgetstr("cl", NULL), 0, ft_pointchar);
}
