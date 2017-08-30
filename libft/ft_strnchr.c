/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:48:40 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/08/22 15:49:31 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnchr(char *str, int c)
{
	char		*tmp;
	size_t		length;
	int			i;

	if (!(str))
		return (NULL);
	length = ft_strlen(str);
	if (!(tmp = (char *)malloc(sizeof(char) * length + 1)))
		return (NULL);
	ft_bzero(tmp, length);
	i = -1;
	while (str[++i] && str[i] != c)
		tmp[i] = str[i];
	tmp[i + 1] = '\0';
	return (tmp);
}
