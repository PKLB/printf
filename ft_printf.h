/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple-berr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:24:03 by ple-berr          #+#    #+#             */
/*   Updated: 2021/11/24 12:17:37 by ple-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_putchar_f(char c);
int		ft_putstr_f(char *s);
int		ft_putnbr_f(int n);
int		ft_unsigned_putnbr_f(unsigned int n);
int		ft_int_len(unsigned int n);
int		ft_hx_nbr(unsigned long c, char *base);
int		ft_check(char c, va_list(params));
int		ft_printf(const char *str, ...);
#endif
