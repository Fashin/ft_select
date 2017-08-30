/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:31:03 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/06/19 15:59:52 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdisplay(t_list *list)
{
	while (list)
	{
		ft_putstr((char *)list->content);
		ft_putstr(" => ");
		ft_putnbr((int)list->content_size);
		ft_putchar('\n');
		list = list->next;
	}
}
