# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/02 13:41:01 by jnederlo          #+#    #+#              #
#    Updated: 2017/03/15 15:45:18 by jnederlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
CC				=	gcc
FLAGS			=	-Wall -Werror -Wextra -I includes
FILES			=	ft_atoi.c ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c \
					ft_strcpy.c ft_strncpy.c ft_strlen.c ft_strstr.c ft_strchr.c \
					ft_strrchr.c ft_strdup.c ft_isprint.c ft_isdigit.c \
					ft_isalpha.c ft_isalnum.c ft_isascii.c ft_toupper.c \
					ft_tolower.c ft_strnstr.c ft_memset.c ft_bzero.c ft_memcpy.c \
					ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strclr.c \
					ft_strequ.c ft_strnequ.c ft_memalloc.c ft_memdel.c ft_strnew.c \
					ft_strdel.c ft_striter.c ft_striteri.c ft_strmap.c \
					ft_strmapi.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
					ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_itoa.c ft_strsplit.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
					ft_strlcat.c ft_word_copy.c ft_count_words.c ft_next_word.c \
					ft_is_whitespace.c ft_count_digits.c ft_lstadd.c ft_lstiter.c \
					ft_lstmap.c ft_linetrim.c ft_linestrip.c get_next_line.c \

#Custom messages to show compilation steps.
MESS_BLANK		=	@echo ""
MESS_ARCHIVE	=	@echo "\033[35m\033[1m**Archiving Library**\033[0m"
MESS_BUILD		=	@echo "\033[33m\033[1m**Building Object Files**\033[0m"

SOURCES			=	$(addprefix srcs/, $(FILES))
OBJECTS			=	$(addprefix build/, $(FILES:.c=.o))

.PHONY: clean fclean all re

all:	$(NAME)

clean:
	@rm -rf build

fclean: clean
	@rm -f $(NAME)

re: fclean all

$(NAME): $(OBJECTS)
	$(MESS_BLANK)
	$(MESS_ARCHIVE)
	ar rcs $@ $(OBJECTS)

build:
	$(MESS_BLANK)
	$(MESS_BUILD)
	@mkdir build/

build/%.o: srcs/%.c | build
	$(CC) $(FLAGS) -c $< -o $@
