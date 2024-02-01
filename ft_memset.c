/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:42:52 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/29 22:30:57 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memset(void *b, int c, size_t len)
{
	size_t	casilla;

	casilla = 0;
	while (casilla < len)
	{
		((char *)b)[casilla] = c;
		casilla++;
	}
	return (b);
}

/*int	main(void)
{
	char arr[15] = "Testeo";
	size_t len;
	len = 3;
	printf("Pre-memset: %s\n", arr + 2);
	ft_memset(arr + 2, 'p', len);
	printf("Post-memset: %s\n", arr);
	return (0);
}*/