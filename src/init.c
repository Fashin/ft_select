/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 15:19:47 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/05 17:11:50 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

static int				apply_cannonique(struct termios term)
{
	term.c_lflag &= ~(ICANON);
	term.c_lflag &= ~(ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	if (!(tcsetattr(0, TCSADRAIN, &term)))
		return (-1);
	return (0);
}

static void				set_signal(void)
{
	signal(SIGWINCH, windows_resisz);
}

static t_list			*create_my_list(char **input)
{
		t_list		*list;
		t_file		file;
		int			i;

		list = ft_lstnew(NULL, 0);
		i = ft_getabsize(input) - 1;
		while (i >= 0)
		{
			file.name = ft_strdup(input[i]);
			file.is_actual = (i == 0) ? 1 : 0;
			file.is_selected = 0;
			ft_lstadd(&list, ft_lstnew((void *)&file, sizeof(t_file)));
			i--;
		}
		set_signal();
		return (list);
}

t_list					*init(char **input)
{
	char				*term_name;
	struct termios 		term;

	if (!(term_name = getenv("TERM")))
		return (NULL);
	if (tgetent(NULL, term_name) == ERR)
		return (NULL);
	if (tcgetattr(0, &term) == -1)
		return (NULL);
	if (!(apply_cannonique(term)))
		return (NULL);
	tputs(tgetstr("vi", NULL), 1, ft_pointchar);
	return (create_my_list(input));
}
