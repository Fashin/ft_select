/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:20:22 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/08 20:13:35 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdst;
	char		*csrc;
	size_t		max;

	max = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	while (max < n)
	{
		cdst[max] = csrc[max];
		max++;
	}
	return (cdst);
}
