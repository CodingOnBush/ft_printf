/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:52:59 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 16:48:37 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdint.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
int		ft_printf(const char *str, ...);
int		ft_putarg(const char character, va_list args);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned int nbr, char *base);
void	ft_putstr_range(const char *s, int start, int end);
int		ft_putstr(char *s);
int		ft_strlen(const char *s);
int		ft_putnbr(int nbr);

#endif