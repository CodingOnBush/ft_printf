/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:06:11 by momrane           #+#    #+#             */
/*   Updated: 2023/11/18 16:18:50 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_get_mem_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		++size;
	}
	return (size);
}

static void	ft_fillarray(char *s, int size, int n)
{
	int	i;
	int	isneg;

	i = size;
	isneg = 0;
	if (n < 0)
	{
		isneg = 1;
		n = -n;
	}
	else
		i--;
	while (i >= 0)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (isneg)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	if (n == 0)
	{
		res = ft_calloc(2, sizeof(char));
		if (!res)
			return (0);
		res[0] = '0';
		return (res);
	}
	size = ft_get_mem_size(n);
	if (n < 0)
		res = ft_calloc((size + 2), sizeof(char));
	else
		res = ft_calloc((size + 1), sizeof(char));
	if (!res)
		return (0);
	ft_fillarray(res, size, n);
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	int n = -42;
// 	char *res = ft_itoa(n);

// 	if (res)
// 		printf("res : %s\n", res);
// 	return (0);
// }