/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:21:32 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/11 14:05:32 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if (!f || !s)
		return ;
	unsigned int i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}
