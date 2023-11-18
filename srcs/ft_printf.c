/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:07:04 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 14:52:14 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len_printed;
	int		begin;
	int		i;

	va_start(args, s);
	len_printed = 0;
	begin = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_putstr_range(s, begin, i);
			len_printed += i - begin;
			len_printed += ft_putarg(s[i + 1], args);
			begin = i + 2;
			i++;
		}
		i++;
	}
	ft_putstr_range(s, begin, i);
	len_printed += i - begin;
	va_end(args);
	return (len_printed);
}

// #include <stdio.h>

// int main(void) {
// 	int result;

// 	result = ft_printf("Hello, world!\n");
// 	printf("Result: %d\n", result);

// 	result = ft_printf("Le nombre %d est un entier.\n", 42);
// 	printf("Result: %d\n", result);

// 	result = ft_printf("%s, %d, %c\n", "Test", 123, 'A');
// 	printf("Result: %d\n", result);

// 	return (0);
// }