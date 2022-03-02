/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr_f.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:43:12 by ple-berr          #+#    #+#             */
/*   Updated: 2021/11/15 19:20:15 by ple-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr_f(unsigned int n)
{
	if (n > 9)
		ft_unsigned_putnbr_f(n / 10);
	ft_putchar_f(n % 10 + '0');
	return (n);
}
