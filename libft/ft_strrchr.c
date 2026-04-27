/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:03:28 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:28:47 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*
int main(void)
{
    char *s = "42 Porto - 42 Lisboa";

    // Procura o último '4'
    printf("Último '4': %s\n", ft_strrchr(s, '4')); // Esperado: 42 Lisboa
    
    // Procura o último '-'
    printf("Último '-': %s\n", ft_strrchr(s, '-')); // Esperado: - 42 Lisboa
    
    return (0);
}
*/