# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momrane <momrane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 15:35:19 by momrane           #+#    #+#              #
#    Updated: 2023/11/22 11:25:18 by momrane          ###   ########.fr        #
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
		./srcs/ft_print_string.c \
		./srcs/ft_strchr.c 

OBJS = 	./srcs/ft_print_integer.o \
		./srcs/ft_print_ptr.o \
		./srcs/ft_print_uinteger.o \
		./srcs/ft_printf.o \
		./srcs/ft_putchar.o \
		./srcs/ft_putnbr_hexa.o \
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
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re