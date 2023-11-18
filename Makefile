# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: momrane <momrane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 15:35:19 by momrane           #+#    #+#              #
#    Updated: 2023/11/18 16:44:03 by momrane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar rcs
CC = cc -Wall -Werror -Wextra
NAME = libftprintf.a
HEADER = ./include/ft_printf.h
SRCS = 	./srcs/ft_bzero.c \
		./srcs/ft_calloc.c \
		./srcs/ft_itoa.c \
		./srcs/ft_printf.c \
		./srcs/ft_putarg.c \
		./srcs/ft_putchar.c \
		./srcs/ft_putnbr_base.c \
		./srcs/ft_putstr_range.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strlen.c \
		./srcs/ft_putnbr.c
		 
OBJS = 	./srcs/ft_bzero.o \
		./srcs/ft_calloc.o \
		./srcs/ft_itoa.o \
		./srcs/ft_printf.o \
		./srcs/ft_putarg.o \
		./srcs/ft_putchar.o \
		./srcs/ft_putnbr_base.o \
		./srcs/ft_putstr_range.o \
		./srcs/ft_putstr.o \
		./srcs/ft_strlen.o \
		./srcs/ft_putnbr.o

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