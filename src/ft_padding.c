/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 20:48:03 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/06 20:48:45 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

void		ft_space_padding(int spaces)
{
	int		i;

	i = -1;
	while (++i < spaces)
		ft_putchar_fd(' ', 0);
}
