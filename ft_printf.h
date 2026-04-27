/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:09:34 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/27 12:05:23 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar_len(char c);
int	ft_putstr_len(char *str);
int	ft_putnbr_len(int n);
int	ft_puthex_len(unsigned int n, char format);
int	ft_putunsigned_len(unsigned int n);
int	ft_putptr_len(unsigned long ptr);
int	ft_puthex_ptr(unsigned long n);

#endif