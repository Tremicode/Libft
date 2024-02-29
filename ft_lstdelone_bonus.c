/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:50:30 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/28 19:03:53 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != 0 && del != 0)
	{
		del(lst->content);
		free(lst);
	}
}

/*void	ft_lstprint(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	char *str3 = ft_strdup("Nodo number 3");
	char *str2 = ft_strdup("Nodo number 2");
	char *str1 = ft_strdup("Nodo number 1");

	t_list	*node1 = ft_lstnew(str3);
	t_list	*node2 = ft_lstnew(str2);
	t_list	*node3 = ft_lstnew(str1);

	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	printf("before list:\n");

	ft_lstprint(node1);

	ft_lstdelone(node3, free);

	printf("After list:\n");
	ft_lstprint(node1);
	return (0);
}*/