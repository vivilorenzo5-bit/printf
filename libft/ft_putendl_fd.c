/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:00:55 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 16:32:17 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
int main(void)
{
    // Escreve a frase e salta a linha automaticamente
    ft_putendl_fd("Olá 42!", 1);
    ft_putstr_fd("Esta frase aparece na linha de baixo.", 1);
    return (0);
}
*/