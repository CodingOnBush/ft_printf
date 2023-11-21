# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allblue <allblue@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 15:35:19 by momrane           #+#    #+#              #
#    Updated: 2023/11/21 15:34:13 by allblue          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar rcs
CC = cc -Wall -Werror -Wextra
NAME = libftprintf.a
HEADER = ./include/ft_printf.h
SRCS = 	./srcs/ft_print_integer.c \
		./srcs/ft_print_ptr.c \
		./srcs/ft_print_uinteger.c \
		./srcs/ft_printf.c \
		./srcs/ft_putchar.c \
		./srcs/ft_putnbr_hexa.c \
		./srcs/ft_putnbr_long.c \
		./srcs/ft_print_string.c \
		./srcs/ft_strchr.c 
		
		 
OBJS = 	./srcs/ft_print_integer.o \
		./srcs/ft_print_ptr.o \
		./srcs/ft_print_uinteger.o \
		./srcs/ft_printf.o \
		./srcs/ft_putchar.o \
		./srcs/ft_putnbr_hexa.o \
		./srcs/ft_putnbr_long.o \
		./srcs/ft_print_string.o \
		./srcs/ft_strchr.o 

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

%.o: %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) a.out

re: fclean all

run: re
	$(CC) $(SRCS) -L. -lftprintf
	rm *.o

.PHONY: all clean fclean re