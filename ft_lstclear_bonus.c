/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:51:33 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/28 22:41:49 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			next = current->next;
			ft_lstdelone(current, del);
			current = next;
		}
		*lst = NULL;
	}
}

/*#include <stdio.h>
#include <stdlib.h>

void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}
//Elimina y libera el nodo 'lst' y todos los consecutivos.
//el puntero a la lista debe ser NULL.
int	main(void)
{
	char	*str1 = ft_strdup("nodo 1");
	char	*str2 = ft_strdup("nodo 2");
	char	*str3 = ft_strdup("nodo 3");

	t_list	*node1 = ft_lstnew(str1);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str3);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);

	printf("before list:\n");
	ft_lstprint(node1);

	ft_lstclear(&node1, free);

	printf("Delete list:\n");
	ft_lstprint(node1);

}*/