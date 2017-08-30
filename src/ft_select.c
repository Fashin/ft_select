/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 18:47:10 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/08/30 20:54:06 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

int					apply_cannonique(struct termios term)
{
	term.c_lflag &= ~(ICANON);
	term.c_lflag &= ~(ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	if (!(tcsetattr(0, TCSADRAIN, &term)))
		return (-1);
	return (0);
}

int					main(void)
{
	char				*term_name;
	struct termios 		term;

	if (!(term_name = getenv("TERM")))
		return (-1);
	if (tgetent(NULL, term_name) == ERR)
		return (-1);
	if (tcgetattr(0, &term) == -1)
		return (-1);
	if (!(apply_cannonique(term)))
		return (-1);
	return (0);
}
