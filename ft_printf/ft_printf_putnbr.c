/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:28:13 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/04/25 18:09:39 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

static int	ft_putdigit(int num)
{
	char	c;

	c = num + '0';
	return (write(1, &c, 1));
}

static int	ft_fix_negative(int *num)
{
	if (*num < 0)
	{
		write(1, "-", 1);
		*num = -*num;
		return (1);
	}
	return (0);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
		return (write(1, "-2147483648", 11));
	len += ft_fix_negative(&n);
	if (n >= 10)
		len += ft_putnbr(n / 10);
	len += ft_putdigit(n % 10);
	return (len);
}
