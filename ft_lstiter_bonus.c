/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:46:45 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 13:23:58 by ctremino         ###   ########.fr       */
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
/*#include <stdio.h>
#include <stdlib.h>

// Función para imprimir un entero
void	print_int(void *num)
{
	printf("%d\n", *((int *)num));
}

int	main(void)
{
	t_list	*lst;
	int		*num;

	// Creamos una lista de enteros
	lst = NULL;
	for (int i = 1; i <= 5; i++)
	{
		num = malloc(sizeof(int));
		*num = i * 10; // Multiplicamos i por 10 para tener números más grandes
		ft_lstadd_back(&lst, ft_lstnew(num));
	}
	// Imprimimos los elementos de la lista utilizando ft_lstiter
	printf("Elementos de la lista:\n");
	ft_lstiter(lst, print_int);
	// Liberamos la memoria asignada a la lista y a sus elementos
	ft_lstclear(&lst, free);
	return (0);
}*/
