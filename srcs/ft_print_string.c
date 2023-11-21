/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allblue <allblue@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:57:32 by momrane           #+#    #+#             */
/*   Updated: 2023/11/21 15:34:47 by allblue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_print_string("(null)"));
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}
