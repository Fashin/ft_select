/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:44:03 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/11/26 18:30:49 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	void	*ptr_content;
	size_t	ptr_content_size;

	ptr_content = (*alst)->content;
	ptr_content_size = (*alst)->content_size;
	(*del)(ptr_content, ptr_content_size);
	ft_memdel((void *)alst);
}
