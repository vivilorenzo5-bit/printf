/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:23:55 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 15:29:58 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
int	main(void)
{
	printf("--- Teste ft_atoi ---\n");
	printf("Original: %d | Minha: %d\n", atoi("  -123"), ft_atoi("  -123"));
	printf("Original: %d | Minha: %d\n", atoi(" +42abc"), ft_atoi(" +42abc"));
	printf("Original: %d | Minha: %d\n", atoi(" \t\n 0"), ft_atoi(" \t\n 0"));
	printf("Original: %d | Minha: %d\n", atoi(" --5"), ft_atoi(" --5"));
	printf("Og: %d | Minha: %d\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("Og: %d | Minha: %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	return (0);
}
*/