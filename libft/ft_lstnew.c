/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:44:03 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:39:33 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

/*
int main(void)
{
    t_list *node;
    char *str = "Primeiro Nó";

    node = ft_lstnew(str);
    if (node)
    {
        printf("Conteúdo: %s\n", (char *)node->content);
        printf("Próximo: %p\n", node->next); // Deve ser 0x0 ou (nil)
        free(node);
    }
    return (0);
}
*/