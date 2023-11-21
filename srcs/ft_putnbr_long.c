/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 06:04:22 by allblue           #+#    #+#             */
/*   Updated: 2023/11/21 15:34:23 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int ft_putnbr_long(long long nb)
{
	int c;

	c = 0;
	if (nb == LLONG_MIN)
		return (ft_print_string("-9223372036854775808"));
	else if (nb < 0)
	{
		c += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		c += ft_putnbr_long(nb / 10);
		c += ft_putchar((nb % 10) + '0');
	}
	else
		c += ft_putchar(nb + '0');
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// long long a;
// 	// int	res;
// 	// a = 13123123123213;
// 	// res = 0;
// 	// res = ft_putnbr_long(a);
// 	// ft_putchar('\n');
// 	// ft_putnbr_long(res - 1);

// 	int		val;
// 	int		*i;
// 	void	*p;

// 	val = 65;
// 	i = &val;
// 	p = &i;
// 	ft_putnbr_long((long long)p);
// 	putchar('\n');
// 	ft_putnbr_hexa((unsigned long)p);
// 	printf("\n%p\n", p);
// 	return (0);
// }