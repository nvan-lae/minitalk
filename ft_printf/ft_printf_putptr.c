/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:18:53 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/04/26 14:45:18 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int	ft_puthex_digit(unsigned int digit)
{
	char	c;

	if (digit < 10)
		c = digit + '0';
	else
		c = digit - 10 + 'a';
	return (write(1, &c, 1));
}

static int	ft_putptr_hex(uintptr_t num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	if (num >= 16)
		len += ft_putptr_hex(num / 16);
	len += ft_puthex_digit(num % 16);
	return (len);
}

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += ft_putptr_hex((uintptr_t)ptr);
	return (len);
}
