# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/08 14:42:13 by jnederlo          #+#    #+#              #
#    Updated: 2017/07/19 14:37:46 by jnederlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a
CC					=	gcc -Wall -Werror -Wextra
FLAGS				=	-I includes
LIBRARY				=	libft
LIBS				=	libft/libft.a
FILES				=	ft_printf.c \
						badge_set.c \
						dispatcher.c \
						padding.c \
						cs_functions.c \
						cs_d_start.c \
						cs_d_print.c \
						cs_d_helpers.c \
						cs_u_start.c \
						cs_u_print.c \
						cs_u_helpers.c \
						cs_s_print.c \
						cs_c_print.c \
						cs_o_start.c \
						cs_o_print.c \
						cs_x_start.c \
						cs_x_print.c \

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
	ar rcs temp.a $(OBJECTS)
	ar -x temp.a
	ar -x libft/libft.a
	ar rcs $(NAME) *.o
	rm temp.a *.o
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
	gcc -g -o $(EXEC) $(TESTING) $(NAME) $(LIBS) -fsanitize=address
	$(MESS_BLANK)
	$(MESS_SUCCESS)
