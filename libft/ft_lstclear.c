/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 12:20:48 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/26 12:46:15 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(void *content, size_t content_size)
{
	ft_putstr("I delete : \'");
	ft_putstr((char *)content);
	ft_putstr("\' who have size = ");
	ft_putnbr((int)content_size);
	ft_putchar('\n');
}
