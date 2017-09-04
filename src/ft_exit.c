/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 22:23:07 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/04 22:34:27 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

void		free_my_list(void *content, size_t size)
{
	free((void *)((t_file *)content)->name);
	//free((void *)((t_file *)content)->is_selected);
	//free((void *)((t_file *)content)->is_actual);
	free(content);
	content = NULL;
	size = 0;
}

int			ft_exit(t_list **list)
{
	print_selected(*list);
	ft_lstdel(list, free_my_list);	
	tputs(tgetstr("ve", NULL), 1, ft_pointchar);
	return (1);
}
