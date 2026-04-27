/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:27:42 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/27 11:11:37 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_len(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_putstr_len("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_len('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr_len(n / 10);
	len += ft_putchar_len((n % 10) + '0');
	return (len);
}
