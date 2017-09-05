/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:11:07 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/05 18:18:27 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static void		print_special(char *str, int type)
{
	char	*spe;

	spe = "\033[37m";
	if (type == 0)
		spe = "\033[30;47;4m";
	else if (type == 1)
		spe = "\033[37;4m";
	else if (type == 2)
		spe = "\033[30;47m";
	ft_putstr(spe);
	ft_putstr(str);
	ft_putstr("\033[0m\n");
}

void			print_selected(t_list *list)
{
	while (list->content)
	{
		if (((t_file *)list->content)->is_selected)
		{
			ft_putstr(((t_file *)list->content)->name);
			ft_putchar(' ');
		}
		list = list->next;
	}
	ft_putchar('\n');
}

void			print_resized_list(int row, int collumn, t_list *list)
{
	(void)row;
	(void)collumn;
	(void)list;
}

void			print_list(t_list *list)
{
	int		is_actual;
	int		is_selected;
	char	*name;

	clean_screen();
	while (list->content)
	{
		is_actual = ((t_file *)list->content)->is_actual;
		is_selected = ((t_file *)list->content)->is_selected;
		name = ((t_file *)list->content)->name;
		if (is_actual && is_selected)
			print_special(name, 0);
		else if (is_actual)
			print_special(name, 1);
		else if (is_selected)
			print_special(name, 2);
		else
			print_special(name, 3);
		list = list->next;
	}
}
