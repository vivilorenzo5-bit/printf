/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:28:38 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:50:08 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int main(void)
{
    t_list *node1 = ft_lstnew("Primeiro");
    t_list *node2 = ft_lstnew("Último");
    node1->next = node2;

    t_list *last = ft_lstlast(node1);
    printf("Conteúdo do último nó: %s\n", (char *)last->content); 
    // Esperado: Último

    return (0);
}
*/