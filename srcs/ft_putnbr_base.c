/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:08:11 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 14:44:42 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr_base(int nbr, char *base)
{
	int			count;
	long int	n;
	long int	b;

	count = 0;
	n = (long int)nbr;
	b = (long int)ft_strlen(base);
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= b)
		count += ft_putnbr_base(n / b, base);
	count += ft_putchar(base[n % b]);
	return (count);
}

// #include <limits.h>

// int main()
// {
//     int number = 42;

//     char base_decimal[] = "0123456789";
//     char base_binary[] = "01";
//     char base_hexadecimal[] = "0123456789ABCDEF";

//     // Test with different bases
//     ft_putnbr_base(number, base_decimal);
//     ft_putchar('\n');

//     ft_putnbr_base(number, base_binary);
//     ft_putchar('\n');

//     ft_putnbr_base(number, base_hexadecimal);
//     ft_putchar('\n');

//     return 0;
// }