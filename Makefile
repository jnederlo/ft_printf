# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/08 14:42:13 by jnederlo          #+#    #+#              #
#    Updated: 2017/07/09 18:29:19 by jnederlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a
CC					=	gcc -Wall -Werror -Wextra
FLAGS				=	-I includes
LIBRARY				=	./libft
LIBS				=	./libft/libft.a
FILES				=	cs_functions.c \
						ft_printf_cs.c \
						ft_printf.c \
						ft_padding.c \

#custom messages to display compilation process.
MESS_BLANK			=	@echo ""
MESS_COMPILE		=	@echo "\033[34m\033[1m**Compiling Local Library**\033[0m"
MESS_ARCHIVE		=	@echo "\033[35m\033[1m**Archiving Library**\033[0m"
MESS_SUCCESS		=	@echo "\033[92m\033[1m******SUCCESSFULLY COMPILED******\033[0m"
MESS_BUILD			=	@echo "\033[33m\033[1m**Building Object Files**\033[0m"
MESS_CUSTOM			=	@echo "\033[97m\033[1m**Compiling Custom Main: 'test'**\033[0m"
MESS_START			=	@echo "\033[1m\033[100m\033[97m******Starting Compilation******\033[0m"

#adding a dependency on the include files.
DEPS				=	./includes/ft_printf.h

#for compilation of my own main.
TESTING				=	testing/main_tests.c
EXEC				=	test


OBJECTS				=	$(addprefix build/, $(FILES:.c=.o))

.PHONY: clean fclean all run

all: $(NAME)

clean:
	@rm -rf build
	@rm -rf ./libft/build

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBS)
	@rm -f $(EXEC)

re: fclean all

$(NAME): $(OBJECTS)
	$(MESS_BLANK)
	$(MESS_COMPILE)
	make -C $(LIBRARY)
	$(MESS_BLANK)
	$(MESS_ARCHIVE)
	ar rcs $@ $(OBJECTS) $(LIBS)
	$(MESS_BLANK)
	$(MESS_SUCCESS)

build:
	$(MESS_BLANK)
	$(MESS_START)
	$(MESS_BLANK)
	$(MESS_BUILD)
	@mkdir build/

build/%.o: srcs/%.c $(DEPS) | build
	$(CC) $(FLAGS) -c $< -o $@

run: all $(EXEC)

$(EXEC): testing/main_tests.c $(NAME)
	$(MESS_CUSTOM)
	$(CC) -o $(EXEC) $(TESTING) $(NAME) $(LIBS) -fsanitize=address -g
	$(MESS_BLANK)
	$(MESS_SUCCESS)
