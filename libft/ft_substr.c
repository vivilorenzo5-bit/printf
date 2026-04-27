/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:37:14 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/23 16:54:44 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}

/*
#include <stdio.h>
int main(void)
{
    char *s = "42 Lisboa é o melhor";
    char *sub;

    // Extrair "Porto" (começa no índice 3, tamanho 6)
    sub = ft_substr(s, 3, 6);
    printf("Substring: [%s]\n", sub); // Esperado: [Lisboa]
    free(sub);

    // Teste com len maior que a string
    sub = ft_substr(s, 3, 50);
    printf("Substring longa: [%s]\n", sub); // Esperado: [Lisboa é o melhor]
    free(sub);

    return (0);
}
*/