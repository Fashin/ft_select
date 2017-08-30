/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 12:46:45 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/08/08 20:05:50 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*list;

	list = *alst;
	while (list->content)
	{
		tmp = list;
		del(list->content, list->content_size);
		list = list->next;
		free(tmp);
	}
	free(list);
	*alst = NULL;
}
