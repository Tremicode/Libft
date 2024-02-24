/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:30:19 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 11:28:04 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// Creamos una lista de ejemplo
	t_list *lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("Hola"));
	ft_lstadd_back(&lst, ft_lstnew("Mundo"));
	ft_lstadd_back(&lst, ft_lstnew("Este"));
	ft_lstadd_back(&lst, ft_lstnew("es"));
	ft_lstadd_back(&lst, ft_lstnew("un"));
	ft_lstadd_back(&lst, ft_lstnew("ejemplo"));

	// Obtenemos el último elemento de la lista
	t_list *last_element = ft_lstlast(lst);

	// Imprimimos el contenido del último elemento
	if (last_element != NULL)
	{
		printf("El último elemento de la lista es: %s\n",
			(char *)last_element->content);
	}
	else
	{
		printf("La lista está vacía\n");
	}

	// Liberamos la memoria de la lista
	ft_lstclear(&lst, free);

	return (0);
}*/
