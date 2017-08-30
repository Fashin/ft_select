/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_fonction.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:20:32 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/26 17:45:04 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_add_fonction(t_list *elem)
{
	t_list	*ptr;

	ptr = ft_lstnew(elem->content, elem->content_size);
	return (ptr);
}
