/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:40:13 by ple-berr          #+#    #+#             */
/*   Updated: 2021/11/25 15:01:03 by ple-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{	
	int		i;
	int		count;
	va_list	params;

	va_start(params, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] != '%' && str[i])
			count += ft_putchar_f(str[i++]);
		if (str[i] == '%' && str[i++] != '\0')
		{
			count += ft_check(str[i], params);
			i++;
		}
	}
	va_end(params);
	return (count);
}

int	main()
{
	char *c;
	char **yoyo;
	c = "hihi";
	yoyo = &c;
	ft_printf("Voici l'addres du pointeur yoyo,%d\n", yoyo);
	return (0);
}
