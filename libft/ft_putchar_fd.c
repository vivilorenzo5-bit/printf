/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:55:34 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 16:30:51 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
    // Escreve 'A' no Standard Output (1)
    ft_putchar_fd('A', 1);
    // Escreve 'X' no canal de erro
    ft_putchar_fd('X', 2);
    return (0);
}
*/