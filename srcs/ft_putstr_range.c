/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:20:30 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 15:11:41 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putstr_range(const char *s, int start, int end)
{
	int	i;

	i = start;
	while (s[i] && i < end)
		ft_putchar(s[i++]);
}
