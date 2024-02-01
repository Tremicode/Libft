/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:48:10 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/25 22:51:58 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = (const unsigned char *)s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "hola mundo";
	char buscar_char = 'm';
	size_t buscar_size = 5;

	void *result = ft_memchr(str, buscar_char, buscar_size);

	if (result != NULL)
	{
		printf("caracter encontrado '%C' en la posicion %td.\n", buscar_char,
			(char *)result - str);
	}
	else
	{
		printf("caracter '%C' no esta en los primeros %zu bytes.\n",
			buscar_char, buscar_size);
	}
	return (0);
}*/