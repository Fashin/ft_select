/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 22:23:07 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/05 18:17:40 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

void		free_my_list(void *content, size_t size)
{
	free((void *)((t_file *)content)->name);
	free(content);
	content = NULL;
	size = 0;
}

int			ft_exit(t_list **list, int print)
{
	clean_screen();
	if (print)
		print_selected(*list);
	ft_lstdel(list, free_my_list);	
	tputs(tgetstr("ve", NULL), 1, ft_pointchar);
	return (1);
}

int			quit(char *str)
{
	ft_putendl(str);
	return (0);
}
