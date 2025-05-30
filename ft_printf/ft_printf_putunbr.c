/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putunbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:45:59 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/04/26 15:35:55 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putdigit(unsigned int n)
{
	char	c;

	c = n + '0';
	return (write(1, &c, 1));
}

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putunbr(n / 10);
	len += ft_putdigit(n % 10);
	return (len);
}
