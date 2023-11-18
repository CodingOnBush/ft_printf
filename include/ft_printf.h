/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:52:59 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 15:03:15 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

char	*ft_itoa(int n);
int		ft_printf(const char *str, ...);
int		ft_putarg(const char c, va_list args);
int		ft_putchar(char c);
int		ft_putnbr_base(int nbr, char *base);
void	ft_putstr_range(const char *s, int start, int end);
int		ft_putstr(char *s);
int		ft_strlen(const char *s);

#endif