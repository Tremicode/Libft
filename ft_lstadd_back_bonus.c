/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:50:23 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/28 11:48:45 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		if (lst[0] != 0)
			ft_lstlast(lst[0])->next = new;
		else
			lst[0] = new;
	}
}

/*int	main(void)
{
	t_list	*node1 = ft_lstnew("Nodo 1");
	t_list	*node2 = ft_lstnew("Nodo 2");
	t_list	*node3 = ft_lstnew("NOdo 3");

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);

	t_list	*lastNode = ft_lstlast(node1);
	printf(" El ultimo Nodo de la Lista es: %s\n", (char *)(lastNode->content));
}*/