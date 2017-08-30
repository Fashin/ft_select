/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:37:09 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/07/25 18:12:10 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (!(result = (char *)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len && s[start] != '\0')
	{
		result[i] = s[start];
		start++;
	}
	result[i] = '\0';
	return (result);
}
