/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:11:07 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/04 18:25:05 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static void		output_underline(char *str)
{
	ft_putstr("\033[4m");
	ft_putstr(str);
	ft_putstr("\033[0m\n");
}

void			print_list(t_list *list)
{
	while (list->content)
	{
		if (((t_file *)list->content)->is_actual)
			output_underline(((t_file *)list->content)->name);
		else
			ft_putendl(((t_file *)list->content)->name);
		list = list->next;
	}
}
