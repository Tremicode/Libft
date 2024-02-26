/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:17 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/25 21:37:49 by ctremino         ###   ########.fr       */
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
/*#include <stdio.h>
#include <stdlib.h>
// Función para convertir una cadena a mayúsculas
void *toupper_str(void *str)
{
    char *s = (char *)str;
    char *result = ft_strdup(s); // Duplicamoscadena parano modificar laoriginal
    if (result == NULL)
        return NULL;

    int i = 0;
    while (result[i] != '\0')
    {
        result[i] = ft_toupper(result[i]); // Convert cada caracter a mayúscula
        i++;
    }

    return result;
}

// Función para liberar memoria de una cadena
void del_str(void *str)
{
    free(str);
}

int main()
{
    // Creamos lista de cadenas de caracteres
    t_list *lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew("hola"));
    ft_lstadd_back(&lst, ft_lstnew("mundo"));
    ft_lstadd_back(&lst, ft_lstnew("esto"));
    ft_lstadd_back(&lst, ft_lstnew("es"));
    ft_lstadd_back(&lst, ft_lstnew("una"));
    ft_lstadd_back(&lst, ft_lstnew("prueba"));

    // Aplicamos la función toupper_str a cada elemento de la lista
    t_list *uppercase_list = ft_lstmap(lst, toupper_str, del_str);

    // Imprimimos lista original y la lista con cadenas convertidas a mayúsculas
    printf("Lista original:\n");
    t_list *tmp = lst;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    printf("\nLista con cadenas en mayúsculas:\n");
    tmp = uppercase_list;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }

    return 0;
}*/
