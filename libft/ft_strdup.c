/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:51:09 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/25 18:11:16 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*back;
	int		i;

	i = -1;
	if (!(back = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[++i])
		back[i] = s1[i];
	back[i] = '\0';
	return (back);
}
