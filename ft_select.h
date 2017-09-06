/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 18:47:43 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/09/07 00:15:14 by cbeauvoi         ###   ########.fr       */
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

# define NF_ARG "ft_select : you need set up arguments"
# define NF_SPACE "ft_select : please increase the size of the window"

typedef	struct		s_file
{
		char		*name;
		int			is_selected;
		int			is_actual;
}					t_file;

typedef struct				s_info
{
		int					min_row;
		int					min_collumn;
		t_list				*list;
		struct termios		term;
}							t_info;

t_info				*info;

t_list				*init(char **input);
t_list				*up(t_list *list);
t_list				*down(t_list *list);
t_list				*space(t_list *list);
t_list				*get_actual(t_list *list);
t_list				*get_last(t_list *list);
void				print_resized_list(int row, int collumn);
void				windows_resisz(int size);
void				list_remove(t_list **list, char *file);
void				print_list(void);	
void				clean_screen(void);
void				print_selected(t_list *list);
void				free_my_list(void *content, size_t size);
void				ft_space_padding(int spaces);
void				ft_error(char *str, int stop);
void				stop_term(int c);
void				pause_term(int c);
void				launch_term(int c);
int					launch_select(t_list *list);
int					ft_pointchar(int c);
int					ft_exit(t_list **list, int print);
int					quit(char *str);
int					get_biggest_string(char **my_tab);

#endif
