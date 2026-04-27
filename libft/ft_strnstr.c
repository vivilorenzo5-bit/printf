/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:46:05 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:25:44 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0'
			&& haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char *haystack = "42 Lisboa, o melhor campus";
    char *needle = "Lisboa";

    // Teste 1: Encontra
    printf("Teste 1: %s\n", ft_strnstr(haystack, needle, 15));
    
    // Teste 2: Não encontra porque o limite (len) é curto demais
    printf("Teste 2: %s\n", ft_strnstr(haystack, needle, 5));
    
    return (0);
}
*/