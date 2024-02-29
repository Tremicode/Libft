/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:46:45 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/28 18:24:42 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL && f != NULL)
	{
		ft_lstiter(lst->next, f);
		f(lst->content);
	}
}
/*static void	f(void *content)
{
	printf("content: %s\n", (char *)content);
}

//itera en la lista.
//Aplica la funcion 'f' en el contenido de cada nodo.
int	main(void)
{
	t_list	*node1 = ft_lstnew("prueba");
	t_list	*node2 = ft_lstnew("nodo");

	ft_lstadd_back(&node1, node2);
	ft_lstiter(node1, f);
}*/
