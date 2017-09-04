/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_select.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 16:10:01 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/04 22:24:57 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static int		is_arrow(char buff[3])
{
	if (buff[0] == 27 && buff[1] == '[')
		return (1);
	return (0);
}

int				launch_select(t_list *list)
{
	char		buff[3];
	t_list		*(*arrow[2])(t_list *);

	arrow[0] = up;
	arrow[1] = down;
	print_list(list);
	while (1)
	{
		read(0, buff, 3);
		if (is_arrow(buff) && ((buff[2] - 65 == 0) || (buff[2] - 65) == 1))
			list = arrow[buff[2] - 65](list);
		else if (buff[0] == 32)
			list = space(list);
		else if (buff[0] == 4)
			return (0);
		else if (buff[0] == 27)
			return (ft_exit(&list));
		ft_bzero(buff, 3);
	}
	return (0);
}
