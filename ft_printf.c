/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:27:10 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/27 11:19:12 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_len(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr_len(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_len(va_arg(args, int));
	else if (specifier == '%')
		count += ft_putchar_len('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		totalcount;

	if (!format)
		return (-1);
	i = 0;
	totalcount = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			totalcount += check_format(format[i + 1], args);
			i += 2;
		}
		else
		{
			totalcount += ft_putchar_len(format[i]);
			i++;
		}
	}
	va_end(args);
	return (totalcount);
}
