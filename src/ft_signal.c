/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 00:03:35 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/07 20:50:23 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_select.h"

void		pause_term(int c)
{
	(void)c;
	tputs(tgetstr("ve", NULL), 0, ft_pointchar);
	tputs(tgetstr("te", NULL), 0, ft_pointchar);
	tcsetattr(0, TCSANOW, &(g_info->term));
	signal(SIGTSTP, SIG_DFL);
	ioctl(0, TIOCSTI, "\032");
	clean_screen();
}

void		launch_term(int c)
{
	(void)c;
	g_info->term.c_lflag &= ~(ICANON);
	g_info->term.c_lflag &= ~(ECHO);
	g_info->term.c_cc[VMIN] = 1;
	g_info->term.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &(g_info->term));
	tputs(tgetstr("vi", NULL), 1, ft_pointchar);
	launch_select(g_info->list);
}

void		stop_term(int c)
{
	(void)c;
	tputs(tgetstr("ve", NULL), 0, ft_pointchar);
	tputs(tgetstr("te", NULL), 0, ft_pointchar);
	tcsetattr(0, TCSANOW, &(g_info->term));
	ft_exit(&(g_info->list), 0);
	clean_screen();
	exit(0);
}
