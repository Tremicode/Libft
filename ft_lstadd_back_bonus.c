/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:50:23 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 10:50:21 by ctremino         ###   ########.fr       */
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
/*int main() {
    // Creamos un nodo existente
    t_list *existing_node = ft_lstnew("Existing Node");

    // Creamos un nuevo nodo que queremos agregar al final de la lista
    t_list *new_node = ft_lstnew("New Node");

    // Creamos un puntero a puntero que apunta al inicio de la lista
    t_list **list_head = &existing_node;

    // Antes de agregar el nuevo nodo al final de la lista
    printf("Lista antes de agregar el nuevo nodo al final:\n");
    while (*list_head != NULL) {
        printf("%s\n", (char*)(*list_head)->content);
        list_head = &(*list_head)->next;
    }

    // Agregamos el nuevo nodo al final de la lista
    ft_lstadd_back(list_head, new_node);

    // Después de agregar el nuevo nodo al final de la lista
    printf("\nLista después de agregar el nuevo nodo al final:\n");
    list_head = &existing_node;
    while (*list_head != NULL) {
        printf("%s\n", (char*)(*list_head)->content);
        list_head = &(*list_head)->next;
    }

    return 0;
}*/
