/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 18:47:43 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/02 16:59:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SELECT_H
# define FT_SELECT_H
# include <curses.h>
# include <term.h>
# include <stdlib.h>
# include <termios.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <sys/ioctl.h>
# include <signal.h>
# include "libft/libft.h"

typedef	struct		s_file
{
		char		*name;
		int			is_selected;
		int			is_actual;
}					t_file;

t_list				*init(char **input);
t_list				*up(t_list *list);
t_list				*down(t_list *list);
t_list				*space(t_list *list);
t_list				*get_actual(t_list *list);
void				print_list(t_list *list);	
int					launch_select(t_list *list);

#endif
