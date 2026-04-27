/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:36:57 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 15:44:06 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > (size_t) -1 / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int main(void)
{
    int *str = ft_calloc(5, sizeof(int));
    if (!str) return (1);
    printf("Conteúdo do índice [0]: %d\n", str[0]); // Deve ser 0
    printf("Conteúdo do índice [4]: %d\n", str[4]); // Deve ser 0
    free(str);
    return (0);
}
*/