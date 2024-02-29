/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:11:27 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/28 10:39:33 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = lst[0];
	lst[0] = new;
}

/*int	main(void)
{
	t_list	*existingNode = ft_lstnew("Nodo existente");

	t_list *newNode = ft_lstnew("Nuevo nodo");

	ft_lstadd_front(&existingNode, newNode);

	printf(" El resultado es: %s\n", (char *)(newNode->content));
	return (0);
}*/