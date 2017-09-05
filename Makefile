# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 11:08:40 by cbeauvoi          #+#    #+#              #
#    Updated: 2017/09/05 15:53:33 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CFLAGS += -Wall -Wextra -Werror

SRCS = 	ft_select.c init.c launch_select.c arrow_control.c print_list.c \
	  	file_control.c ft_exit.c list_remove.c 

LIB = ./libft/libft.a
CC = gcc
SRC = $(addprefix src/, $(SRCS))
OBJ = $(SRC:.c=.o)

# COLOR
C_GOOD = "\033[32m"
C_DURING = "\033[36m"
RESET = "\033[00m"

# MESSAGE
SUCCESS = $(C_GOOD)COMPILATION SUCCEEDED

all: $(NAME)

$(NAME): $(OBJ)
	@make re -C libft/
	@echo $(C_DURING)"Compiling" [ $(NAME) . . . ]
	@$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME) -ltermcap
	@echo $(SUCCESS) $(RESET)

cc:
		$(CC) -g $(OBJ) $(LIB) -o $(NAME)

clean:
		@/bin/rm -f $(OBJ)
		@make clean -C libft/
		@echo $(C_GOOD)".o FILES DELETED" $(RESET)

fclean: clean
		@/bin/rm -f $(NAME)
		@/bin/rm -rf $(NAME).dSYM
		@make fclean -C libft/
		@echo $(C_GOOD)"EXECUTABLE FILE DELETED" $(RESET)

re: fclean all

leak: fclean $(OBJ)
	@make re -C libft/
	$(CC) $(OBJ) $(LIB) -g -o $(NAME)
