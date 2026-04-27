/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:20:09 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:31:11 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
#include <stdio.h>
int main(void)
{
    char *s1 = "...  Olá 42 Lisboa !!!  ";
    char *set = ". !";
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed)
    {
        printf("Antes:  [%s]\n", s1);
        printf("Depois: [%s]\n", trimmed); // Esperado: [Olá 42 Lisboa]
        free(trimmed);
    }
    return (0);
}
*/