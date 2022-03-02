/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:48:29 by ple-berr          #+#    #+#             */
/*   Updated: 2022/02/28 11:44:40 by ple-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list params)
{
	int	count;

	count = 0;
	if (c == 'c')
		return (ft_putchar_f(va_arg(params, int)));
	else if (c == 's')
		return (ft_putstr_f(va_arg(params, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr_f(va_arg(params, int)));
	else if (c == '%')
		return (ft_putchar_f('%'));
	else if (c == 'u')
		return (ft_int_len(ft_unsigned_putnbr_f(va_arg(params, unsigned int))));
	else if (c == 'x')
		return (ft_hx_nbr(va_arg(params, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_hx_nbr(va_arg(params, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
	{
		write (1, "0x", 2);
		return (ft_hx_nbr(va_arg(params, unsigned long), "0123456789abcdef") \
				+ 2);
	}
	return (count);
}
