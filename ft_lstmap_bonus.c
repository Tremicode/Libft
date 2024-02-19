/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:17 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/19 13:46:10 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *listnew;
	t_list *point;
	void *buffer;

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
			return NULL;
		}
		ft_lstadd_back(&listnew, point);
		lst = lst->next;
	}
		return listnew;
}
