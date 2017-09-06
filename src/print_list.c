/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:11:07 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/07 00:00:37 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static void		print_name(t_file *file)
{
	char	*color;

	if (file->is_actual && file->is_selected)
		color = "\033[30;47;4m";
	else if (file->is_actual)
		color = "\033[37;4m";
	else if (file->is_selected)
		color = "\033[30;47m";
	else
		color = "\033[37m";
	ft_putstr_fd(color, 0);
	ft_putstr_fd(file->name, 0);
	ft_putstr_fd("\033[0m", 0);
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

void			new_print_list(t_list *list, int col)
{
	int		i;
	char	*name;

	clean_screen();
	while (list->content)
	{
		i = -1;
		while (++i < col && list->content)
		{
			name = ((t_file *)list->content)->name;
			print_name((t_file *)list->content);
			ft_space_padding((info->min_collumn - ft_strlen(name)) + 1);
			list = list->next;
		}
		if (list->content)
			ft_putchar_fd('\n', 0);
	}
}

void			print_resized_list(int row, int collumn)
{
	int			nbr_col;
	int			i;
	t_list		*tmp;

	nbr_col = 1;
	i = -1;
	tmp = info->list;
	while (tmp->content)
	{
		++i;
		if (i == row)
			nbr_col++;	
		tmp = tmp->next;
	}
	if (collumn < (info->min_collumn * nbr_col) + 2)
		ft_error(NF_SPACE, 0);
	else
		new_print_list(info->list, nbr_col);
}

void			print_list(void)
{
	struct winsize		test;

	if (ioctl(0, TIOCGWINSZ, &test) < 0)
		exit(-1);
	print_resized_list(test.ws_row, test.ws_col);
}
