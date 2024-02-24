/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 22:51:33 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 12:52:25 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			next = current->next;
			ft_lstdelone(current, del);
			current = next;
		}
		*lst = NULL;
	}
}
/*#include <stdio.h>
#include <stdlib.h>


// Función para liberar la memoria asignada a un entero
void del_int(void *num)
{
    free(num);
}

int main()
{
    // Creamos una lista de enteros
    t_list *lst = NULL;
    for (int i = 1; i <= 5; i++)
    {
        int *num = malloc(sizeof(int));
        *num = i;
        ft_lstadd_back(&lst, ft_lstnew(num));
    }

    // Imprimimos elementos de la lista antes de liberar la memoria
    printf("Lista antes de liberar la memoria:\n");
    t_list *tmp = lst;
    while (tmp)
    {
        printf("%d ", *((int *)tmp->content));
        tmp = tmp->next;
    }
    printf("\n");

    // Liberamos la memoria de la lista
    ft_lstclear(&lst, del_int);

    // Imprimimos mensaje indicando que la lista ha sido liberada
    printf("La memoria de la lista ha sido liberada.\n");

    return 0;
}*/
