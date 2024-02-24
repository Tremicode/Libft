/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:50:30 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 13:12:26 by ctremino         ###   ########.fr       */
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
/*#include <stdio.h>
#include <stdlib.h>

// Función para liberar la memoria de un entero
void	del_int(void *num)
{
	free(num);
}

int	main(void)
{
	// Creamos un nodo de lista con un entero
	int *num = malloc(sizeof(int));
	*num = 42;
	t_list *node = ft_lstnew(num);

	// Imprimimos el contenido del nodo antes de eliminarlo
	printf("Contenido del nodo antes de eliminarlo: %d\n",
		*((int *)node->content));

	// Eliminamos el nodo
	ft_lstdelone(node, del_int);

	// Intentamos acceder al contenido del nodo después de eliminarlo
	// Esto debería producir un comportamiento indefinido,
		ya que el nodo ya no existe
	printf("Contenido del nodo después de eliminarlo: %d\n",
		*((int *)node->content));

	return (0);
}*/
