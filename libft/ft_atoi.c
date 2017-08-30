/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:15:23 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/30 16:50:44 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*check_the_spaces(char *str)
{
	int		i;

	i = 0;
	while (str[i] == 32 || str[i] == 9
			|| str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r')
		i++;
	return (&str[i]);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		back;
	int		signe;

	i = 0;
	back = 0;
	signe = 1;
	str = check_the_spaces((char *)str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = (-1);
		i = 1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		back = (back * 10) + (str[i] - 48);
		i++;
	}
	return (back * signe);
}
