/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:22:06 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/19 13:25:56 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)

{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	s[20] = "hola a todos";

	s[2] = '0';
	printf("%s\n", s);
	return (0);
}*/
