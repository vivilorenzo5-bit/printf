/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:55:15 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 16:55:48 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len + 1);
	return (dest);
}

/*
int main(void)
{
    char *original = "42 Lusboa";
    char *copia = ft_strdup(original);

    if (copia)
    {
        printf("Original: %s em %p\n", original, original);
        printf("Cópia:    %s em %p\n", copia, copia);
        free(copia); // need always ! ! !
    }
    return (0);
}
*/