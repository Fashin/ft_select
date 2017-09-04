/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:11:07 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/04 22:31:58 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static void		output_underline(char *str)
{
	ft_putstr("\033[4m");
	ft_putstr(str);
	ft_putstr("\033[0m\n");
}

static void		print_colored_background(char *str)
{
	ft_putstr("\033[47m");
	ft_putstr(str);
	ft_putstr("\033[0m\n");
}

static void 	print_underline_background(char *str)
{
	ft_putstr("\033[47;4m");
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
}

void			print_list(t_list *list)
{
	clean_screen();
	while (list->content)
	{
		if (((t_file *)list->content)->is_actual && ((t_file *)list->content)->is_selected)
			print_underline_background(((t_file *)list->content)->name);
		else if (((t_file *)list->content)->is_actual)
			output_underline(((t_file *)list->content)->name);
		else if (((t_file *)list->content)->is_selected)
			print_colored_background(((t_file *)list->content)->name);
		else
			ft_putendl(((t_file *)list->content)->name);
		list = list->next;
	}
}
