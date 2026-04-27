/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 15:33:55 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 15:59:36 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char b1[] = "atoms";
    char b2[] = "atons";

    printf("Comparar 'atoms' com 'atons' (5 bytes):\n");
    printf("Minha:    %d\n", ft_memcmp(b1, b2, 5));
    printf("Original: %d\n", memcmp(b1, b2, 5));
    
    printf("Comparar apenas 3 bytes:\n");
    printf("Minha:    %d\n", ft_memcmp(b1, b2, 3)); // Deve dar 0
    return (0);
}
*/