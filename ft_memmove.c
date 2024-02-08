/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:49:49 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/08 13:48:58 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t 	cont;
	
	cont = 0;
	if (!src && !dst)
		return (0);
	if (src < dst) 
	{
		cont = len;
		while (cont > 0)
		{
			cont--;
			((unsigned char * ) dst)[cont] = ((unsigned char *) src)[cont];
		}
	}
	else
	{
		cont = 0;
		while (cont < len)
		{
			((unsigned char * ) dst)[cont] = ((unsigned char *) src)[cont];
			cont++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	origen[] = "hola mundo";
	char	buffer[20];

	ft_memmove(buffer, origen, strlen(origen) + 1);
	printf("origen: %s\n", origen);
	printf("buffer: %s\n", buffer);
	return (0);
}*/
