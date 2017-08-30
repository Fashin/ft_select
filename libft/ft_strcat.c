/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:52:30 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/10 14:12:03 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = s1;
	ptr2 = (char *)s2;
	while (*ptr1)
		ptr1++;
	while (*ptr2)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
	return (s1);
}
