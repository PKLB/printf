/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:53:25 by ple-berr          #+#    #+#             */
/*   Updated: 2021/11/15 19:21:06 by ple-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_len(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}