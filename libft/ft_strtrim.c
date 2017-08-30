/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:05:12 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/06 19:33:38 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		end_of_string(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i])
		return (0);
	else
		return (1);
}

static int		ft_strlennspaces(char const *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	j = 0;
	while (str[i] && !end_of_string((char *)str + i))
	{
		j++;
		i++;
	}
	return (j);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlennspaces(s) + 1);
	if (str)
	{
		ft_bzero(str, ft_strlennspaces(s) + 1);
		i = 0;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		start = i;
		while (s[i] && !end_of_string((char *)s + i))
		{
			str[i - start] = s[i];
			i++;
		}
		return (str);
	}
	return (NULL);
}
