/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-lae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:41:09 by nvan-lae          #+#    #+#             */
/*   Updated: 2025/04/26 15:23:56 by nvan-lae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_convert(const char format, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *str);

int	ft_putnbr(int n);
int	ft_putptr(void *ptr);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned int num, int uppercase);

#endif
