/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:00:14 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:15:36 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

/*
int main(void)
{
    char dest[5];
    char *src = "Porto";
    size_t res;

    res = ft_strlcpy(dest, src, 5);
    
    printf("String no destino: %s\n", dest); // Esperado: Port
    printf("Retorno (tamanho de src): %zu\n", res); // Esperado: 5
    return (0);
}
*/