/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:45:16 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/23 15:43:37 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	if (dstsize == 0)
		return (src_len);
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (*src && --dstsize)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
/*int	main(void)
{
	char destino[20] = "hola    ";
	const char origen[] = "mundo";

	size_t len = ft_strlcpy(destino, origen, sizeof(destino));

	printf("despues concatenacion: %s\n", destino);
	printf("long total: %zu\n", len);

	return (0);
}*/