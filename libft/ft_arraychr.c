/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraychr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:20:14 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/11 17:56:29 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_arraychr(char **array, char *search)
{
	int		i;

	i = -1;
	while (array[++i])
		if (ft_strcmp(array[i], search) == 0)
			return (search);
	return (NULL);
}
