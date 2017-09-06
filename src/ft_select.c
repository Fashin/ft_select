/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 18:47:10 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/06 18:54:37 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

int					main(int ac, char **av)
{
	t_list		*list;

	if (ac < 2)
		return(quit(NF_ARG));
	if (!(list = init(av + 1)))
		return (-1);
	info->list = list;
	return (launch_select(list));
}
