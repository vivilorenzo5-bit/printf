/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:08:07 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 15:37:29 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char str1[10] = "42 Lisboa";
	char str2[10] = "42 Lisboa";

	printf("--- Teste ft_bzero ---\n");
	
	//apagar os primeiros 3 bytes ("42 ")
	ft_bzero(str1, 3);
	bzero(str2, 3);

	//se os primeiros bytes são \0, o printf %s não imprime nada 
	// ou para no primeiro caractere.
	printf("Minha (índice 3): %c\n", str1[3]);
	printf("Original (índice 3): %c\n", str2[3]);
	return (0);
}
*/