/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:52:59 by momrane           #+#    #+#             */
/*   Updated: 2023/11/21 15:33:29 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>

int		ft_print_integer(int n, char format);
int		ft_print_ptr(unsigned long ptr);
int		ft_print_uinteger(unsigned int nb, char format);
int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr_hexa(unsigned long nbr, char format);
int		ft_putnbr_long(long long nb);
int		ft_print_string(char *s);
char	*ft_strchr(const char *s, int c);

#endif