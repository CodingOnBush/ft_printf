/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:08:32 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 16:43:23 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putarg(const char character, va_list args)
{
	if (character == '%')
		return (ft_putchar('%'));
	else if (character == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (character == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (character == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (character == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (character == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (character == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (character == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	return (0);
}
