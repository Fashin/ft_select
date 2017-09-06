/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_control.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:53:13 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/06 19:05:59 by cbeauvoi         ###   ########.fr       */
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

void		windows_resisz(int size)
{
	struct winsize		new_size;

	(void)size;
	if (ioctl(0, TIOCGWINSZ, &new_size) < 0)
		return ;
	print_resized_list(new_size.ws_row, new_size.ws_col);
}

int			ft_pointchar(int c)
{
	write(STDIN_FILENO, &c, 1);
	return (0);
}

void		clean_screen(void)
{
	tputs(tgetstr("cl", NULL), 1, ft_pointchar);
}
