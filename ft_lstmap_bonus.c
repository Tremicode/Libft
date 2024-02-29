/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:17 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/28 22:56:21 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;
	void	*buffer;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	listnew = NULL;
	while (lst != NULL)
	{
		buffer = f(lst->content);
		point = ft_lstnew(buffer);
		if (point == NULL)
		{
			del(buffer);
			ft_lstclear(&listnew, del);
			return (NULL);
		}
		ft_lstadd_back(&listnew, point);
		lst = lst->next;
	}
	return (listnew);
}

/*// Función para duplicar una cadena de caracteres
void	*duplicate_string(void *content)
{
	char *str = (char *)content;
	return ft_strdup(str);
}

int	main(void)
{
	// Creación de nodos
	t_list *node1 = ft_lstnew("nodo numero 1");
	t_list *node2 = ft_lstnew("nodo numero 2");

	// Agregar el segundo nodo al final del primero
	ft_lstadd_back(&node1, node2);

	// Imprimir la lista original
	printf("Lista Original:\n");
	ft_lstprint(node1);

	// Crear una nueva lista copiando la original y duplicando 

	t_list *new_lst = ft_lstmap(node1, duplicate_string, free);

	// Imprimir la lista copiada
	printf("Lista Copiada:\n");
	ft_lstprint(new_lst);

	// Limpiar la memoria de la lista copiada
	ft_lstclear(&new_lst, free);

	return (0);
}*/
