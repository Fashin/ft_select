/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:58:49 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/02 18:57:42 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
