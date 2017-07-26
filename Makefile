# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnederlo <jnederlo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/08 14:42:13 by jnederlo          #+#    #+#              #
#    Updated: 2017/07/26 11:30:47 by jnederlo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a
CC					=	gcc -Wall -Werror -Wextra
FLAGS				=	-I includes
FILES				=	ft_printf.c \
						badge_set.c \
						dispatcher.c \
						padding.c \
						cs_func_lc_cs_uc_cs.c \
						cs_func_doux.c \
						cs_func_p_ps.c \
						cs_func_uc_doux.c \
						cs_d_start.c \
						cs_d_print.c \
						cs_d_helpers.c \
						cs_u_start.c \
						cs_u_print.c \
						cs_u_helpers.c \
						cs_o_start.c \
						cs_o_print.c \
						cs_x_start.c \
						cs_x_print.c \
						cs_c_print.c \
						cs_uc_c_print.c \
						cs_s_print.c \
						cs_uc_s_print.c \
						wide_char.c \
						cs_uc_x_start.c \
						cs_uc_x_print.c \
						cs_uc_duo.c \
						cs_p_print.c \
						library_funcs.c \

#custom messages to display compilation process.
MESS_BLANK			=	@echo ""
MESS_ARCHIVE		=	@echo "\033[35m\033[1m**Archiving libftprintf.a**\033[0m"
MESS_SUCCESS		=	@echo "\033[92m\033[1m******IT'S PICKLE RICK!!******\033[0m"
MESS_FINISH			=	@echo "\033[92m\033[1m******WUBBA LUBBA DUB DUB******\033[0m"
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
	@rm -f $(EXEC)

re: fclean all

$(NAME): $(OBJECTS)
	$(MESS_ARCHIVE)
	ar rcs $@ $(OBJECTS)
	$(MESS_BLANK)
	$(MESS_SUCCESS)

build:
	$(MESS_BLANK)
	$(MESS_START)
	$(MESS_BLANK)
	$(MESS_BUILD)
	@mkdir build/

build/%.o: srcs/%.c $(DEPS) | build
	$(CC) $(FLAGS) -c $< -o $@ -g

run: all $(EXEC)

$(EXEC): testing/main_tests.c $(NAME)
	$(MESS_CUSTOM)
	gcc -o $(EXEC) $(TESTING) $(NAME) $(LIBS) -fsanitize=address
	$(MESS_BLANK)
	$(MESS_FINISH)
