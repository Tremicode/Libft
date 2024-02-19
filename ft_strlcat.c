/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:45:16 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/19 17:29:59 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len++;
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst_len + ft_strlen(&src[i]));
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