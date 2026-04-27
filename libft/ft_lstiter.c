/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlourenc <vlourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:15:53 by vlourenc          #+#    #+#             */
/*   Updated: 2026/04/22 17:50:48 by vlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
// Função que será aplicada a cada nó
void	print_content(void *content)
{
	printf("Conteúdo: %s\n", (char *)content);
}

int main(void)
{
	t_list *head = ft_lstnew("Porto");
	ft_lstadd_back(&head, ft_lstnew("Lisboa"));
	ft_lstadd_back(&head, ft_lstnew("Braga"));

	// Itera e imprime
	ft_lstiter(head, print_content);

	return (0);
}
*/