/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hx_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:01 by ple-berr          #+#    #+#             */
/*   Updated: 2021/11/16 12:17:53 by ple-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hx_nbr(unsigned long c, char *base)
{
	int	i;

	i = 0;
	if (c >= 16)
	{
		i += ft_hx_nbr(c / 16, base);
		ft_putchar_f(base[c % 16]);
	}
	else
		ft_putchar_f(base[c]);
	i++;
	return (i);
}
