/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlastmaillon.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 17:30:15 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/30 16:45:18 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_getlastmaillon(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
