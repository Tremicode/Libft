/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:09:49 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/25 14:24:03 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	origen_len;
	size_t	i;

	origen_len = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (origen_len);
}

/*int	main(void)
{
	char		destino[20];
	const char	origen[] = "hola cadena";
	size_t		len;

	len = ft_strlcpy(destino, origen, sizeof(destino));
	printf("long despues de la copia: %zu\n", len);
	printf("destino: %s\n", destino);
	return (0);
}*/
