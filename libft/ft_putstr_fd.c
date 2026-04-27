/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:58:06 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 16:37:42 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
int main(void)
{
    // Teste normal no Standard Output
    ft_putstr_fd("Testando ft_putstr_fd...\n", 1);
    
    // Teste no Standard Error
    ft_putstr_fd("Isto é um erro simulado.\n", 2);
    
    // Teste com NULL
    ft_putstr_fd(NULL, 1);
    
    return (0);
}
*/