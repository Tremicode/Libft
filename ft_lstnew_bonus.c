/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:23:10 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/22 17:17:13 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (NULL == node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*new_nodo;

	new_nodo = ft_lstnew("Hello World");
	if (new_nodo != NULL)
	{
		printf("Creacion de un nuevo nodo: %s\n", (char *)new_nodo->content);
	}
	else
	{
		printf("error al crear un nuevo nodo.\n");
	}
	return (0);
}*/
