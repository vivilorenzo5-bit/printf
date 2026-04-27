/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:06:13 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 15:56:31 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}

/*
int main(void)
{
    char s[] = "42 Porto";
    void *res1 = ft_memchr(s, 'P', 8);
    void *res2 = ft_memchr(s, 'z', 8);

    printf("Encontrou 'P': %s\n", (char *)res1); // Deve imprimir "Porto"
    printf("Encontrou 'z': %p\n", res2);         // Deve imprimir 0x0 (nil)
    return (0);
}
*/