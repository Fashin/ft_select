# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 15:48:58 by cbeauvoi          #+#    #+#              #
#    Updated: 2017/07/25 16:42:59 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c \
		   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c ft_strcmp.c \
		   ft_strncmp.c ft_strstr.c ft_strnstr.c ft_strlen.c ft_strchr.c \
		   ft_strrchr.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_realloc.c \
		   ft_strcpy.c ft_strncpy.c ft_strdup.c ft_memset.c ft_bzero.c \
		   ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		   ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		   ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		   ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		   ft_itoa.c ft_putstr.c ft_putchar.c ft_putendl.c ft_putnbr.c \
		   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		   ft_lstnew.c ft_lstadd.c ft_lstdisplay.c ft_lstdelone.c ft_lstclear.c \
		   ft_lstdel.c ft_lstiter.c ft_add_fonction.c ft_lstmap.c ft_getlastmaillon.c \
		   ft_lstreverse.c get_next_line.c ft_lstselectsort.c ft_strnchr.c ft_arraychr.c \
		   ft_getarraysize.c put_maj.c ft_freejoin.c

EXE_NAME = a.out

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ_NAME = $(SRC_NAME:.c=.o)

NAME = libft.a

HEADERFLAGS = -I libft.h

all: $(NAME)

$(NAME):
	@$(CC) -c $(CFLAGS) $(SRC_NAME) $(HEADERFLAGS)
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ_NAME)

fclean: clean
	@rm -rf $(EXE_NAME)
	@rm -rf $(NAME)

re: fclean all

comp:
	$(CC) $(CFLAGS) $(SRC_NAME)
