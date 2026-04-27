/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:24:36 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:42:08 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
int main(void)
{
    t_list *head = ft_lstnew("Nó 1");
    head->next = ft_lstnew("Nó 2");
    head->next->next = ft_lstnew("Nó 3");

    printf("Tamanho da lista: %d\n", ft_lstsize(head)); // Esperado: 3
    return (0);
}
*/