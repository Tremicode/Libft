/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:24:16 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/13 12:03:31 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	origen[] = "hola mundo";
	char	destino[7];

	ft_memcpy(destino, origen, sizeof(origen));
	printf("%s\n", destino);
	printf("%s", ft_memcpy(((void *) 0), ((void *) 0), 0));
	printf("%s", memcpy(((void *) 0), ((void *) 0), 0));
	return (0);
}*/
