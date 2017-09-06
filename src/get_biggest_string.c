/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_biggest_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 18:38:23 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/05 18:54:00 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

int			get_biggest_string(char **my_tab)
{
	int		i;
	int		max;
	int		tmp;

	i = -1;
	max = 0;
	while (my_tab[++i])
		if ((tmp = ft_strlen(my_tab[i])) > max)
			max = tmp;
	return (max);
}
