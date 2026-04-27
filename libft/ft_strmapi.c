/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 17:57:05 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:18:44 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || !f)
		return (NULL);
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
char	my_map_func(unsigned int i, char c)
{
	if (i % 2 != 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char *original = "hello";
	char *resultado = ft_strmapi(original, my_map_func);

	if (resultado)
	{
		printf("Original:  %s\n", original);
		printf("Mapeada:   %s\n", resultado); // Esperado: hElLo
		free(resultado);
	}
	return (0);
}
*/