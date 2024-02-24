/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 22:25:36 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/23 18:44:39 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main() {
    // Creamos una lista enlazada simple con algunos nodos
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Enlazamos los nodos para formar una lista: node1 -> node2 -> node3 -> NULL
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Llamamos a la función ft_lstsize para obtener el tamaño de la lista
    int size = ft_lstsize(node1);

    // Imprimimos el tamaño de la lista
    printf("Tamaño de la lista: %d\n", size);

    return 0;
}*/
