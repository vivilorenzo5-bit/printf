/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:10:13 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/27 12:38:14 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_len(unsigned int n, char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_puthex_len(n / 16, format);
	len += ft_putchar_len(base[n % 16]);
	return (len);
}

int	ft_putptr_len(unsigned long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len += ft_putstr_len("(nil)");
		return (len);
	}
	len += ft_putstr_len("0x");
	len += ft_puthex_ptr(ptr);
	return (len);
}

int	ft_puthex_ptr(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_puthex_ptr(n / 16);
	len += ft_putchar_len(base[n % 16]);
	return (len);
}
