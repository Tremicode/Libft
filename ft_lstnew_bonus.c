/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:23:10 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/15 17:23:17 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

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

/*int	main(void)
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
