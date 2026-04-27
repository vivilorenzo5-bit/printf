/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:32:10 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:16:27 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

/*
int main(void)
{
    char *str = "42 Lisboa";

    printf("Minha strlen:    %zu\n", ft_strlen(str));
    printf("Original strlen: %zu\n", strlen(str));
    return (0);
}
*/