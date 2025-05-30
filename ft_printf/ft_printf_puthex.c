/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puthex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:13:14 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/04/26 15:22:42 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_digit(unsigned int digit, int uppercase)
{
	char	c;

	if (digit < 10)
		c = digit + '0';
	else
	{
		if (uppercase)
			c = digit - 10 + 'A';
		else
			c = digit - 10 + 'a';
	}
	return (write(1, &c, 1));
}

int	ft_puthex(unsigned int num, int uppercase)
{
	int	len;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	if (num >= 16)
		len += ft_puthex(num / 16, uppercase);
	len += ft_puthex_digit(num % 16, uppercase);
	return (len);
}
