/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:17:20 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/02 16:24:17 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*src_;
	char		*dst_;
	size_t		i;

	i = -1;
	src_ = (char *)src;
	dst_ = (char *)dst;
	if (src_ < dst_)
		while ((int)--len >= 0)
			*(dst_ + len) = *(src_ + len);
	else
		while (++i < len)
			*(dst_ + i) = *(src_ + i);
	return (dst);
}
