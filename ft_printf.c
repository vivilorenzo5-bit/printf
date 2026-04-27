/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:27:10 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/27 10:24:33 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_len(va_arg(args, int));
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
		if (format[i] == '%')
			totalcount += check_format(format[++i], args);
		else
			totalcount += ft_putchar_len(format[i]);
		i++;
	}
	va_end(args);
	return (totalcount);
}
