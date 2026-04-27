/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:45:46 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 16:48:41 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "42 Lisboa";

    printf("a procurar 'L': %s\n", ft_strchr(s, 'L')); // Esperado: Lisboa
    printf("a procurar '\\0': %p\n", ft_strchr(s, '\0')); // Esperado: fim
    printf("a procurar 'z': %s\n", ft_strchr(s, 'z')); // Esperado: (null)
    return (0);
}
*/