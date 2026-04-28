/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:27:10 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/28 15:58:54 by vlourenc         ###   ########.fr       */
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
	else if (specifier == 'u')
		count += ft_putunsigned_len(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_puthex_len(va_arg(args, unsigned int), specifier);
	else if (specifier == 'p')
		count += ft_putptr_len(va_arg(args, unsigned long));
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

// #include <limits.h>

// int	main(void)
// {
// 	int	meu;
// 	int	orig;
// 	void	*ptr = &meu;

// 	printf("--- 1. Caracteres e Percentagem ---\n");
// 	meu = ft_printf("Meu: %c e %%\n", 'A');
// 	orig = printf("Ori: %c e %%\n", 'A');
// 	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

// 	printf("--- 2. Strings e NULL ---\n");
// 	meu = ft_printf("Meu: [%s] | NULL: [%s]\n", "42 Lisboa", (char *)NULL);
// 	orig = printf("Ori: [%s] | NULL: [%s]\n", "42 Lisboa", (char *)NULL);
// 	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

// 	printf("--- 3. Inteiros (d e i) ---\n");
// 	meu = ft_printf("Meu: %d | %i\n", INT_MAX, INT_MIN);
// 	orig = printf("Ori: %d | %i\n", INT_MAX, INT_MIN);
// 	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

// 	printf("--- 4. Unsigned (u) ---\n");
// 	meu = ft_printf("Meu: %u | %u\n", 0, 4294967295U);
// 	orig = printf("Ori: %u | %u\n", 0, 4294967295U);
// 	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

// 	printf("--- 5. Hexadecimais (x e X) ---\n");
// 	meu = ft_printf("Meu: %x | %X\n", 255, 255);
// 	orig = printf("Ori: %x | %X\n", 255, 255);
// 	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

// 	printf("--- 6. Ponteiros (p) ---\n");
// 	meu = ft_printf("Meu: %p | NULL: %p\n", ptr, NULL);
// 	orig = printf("Ori: %p | NULL: %p\n", ptr, NULL);
// 	printf("Retornos: Meu %d | Ori %d\n\n", meu, orig);

// 	return (0);
// }
