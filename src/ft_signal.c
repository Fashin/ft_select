/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 00:03:35 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/07 18:37:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

void		pause_term(int c)
{
	(void)c;
	tputs(tgetstr("ve", NULL), 0, ft_pointchar);
	tputs(tgetstr("te", NULL), 0, ft_pointchar);
	tcsetattr(0, TCSANOW, &(info->term));
	signal(SIGTSTP, SIG_DFL);
	ioctl(0, TIOCSTI, "\032");
	clean_screen();
}


void		launch_term(int c)
{
	(void)c;
	info->term.c_lflag &= ~(ICANON);
	info->term.c_lflag &= ~(ECHO);
	info->term.c_cc[VMIN] = 1;
	info->term.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &(info->term));
	tputs(tgetstr("vi", NULL), 1, ft_pointchar);
	launch_select(info->list);
}

void		stop_term(int c)
{
	(void)c;
	tputs(tgetstr("ve", NULL), 0, ft_pointchar);
	tputs(tgetstr("te", NULL), 0, ft_pointchar);
	tcsetattr(0, TCSANOW, &(info->term));
	ft_exit(&(info->list), 0);
	clean_screen();
	exit(0);
}

