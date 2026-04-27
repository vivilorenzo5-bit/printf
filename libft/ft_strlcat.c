/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:07:41 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:11:27 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size <= dlen)
		return (size + slen);
	i = dlen;
	j = 0;
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}

/*
int main(void)
{
    char dest[15] = "Ola ";
    char *src = "Queta!";
    size_t res;

    res = ft_strlcat(dest, src, 15);
    printf("String final: %s\n", dest); // Esperado: Ola Queta!
    printf("Tamanho total tentado: %zu\n", res); // Esperado: 10
    return (0);
}
*/