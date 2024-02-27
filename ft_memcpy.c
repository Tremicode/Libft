/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:24:16 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/26 16:24:05 by ctremino         ###   ########.fr       */
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
/*#include <stdio.h>
#include <stdlib.h> // Incluimos esta librería para usar la función malloc

int main() {
    // Definimos una cadena src
    char src[] = "Hello, world!";
    // Declar buffer dest con espacio para almacenar la cadena de src
    char dest[20];

    // Copy cadena src en el buffer de dest utilizando ft_memcpy
    ft_memcpy(dest, src, 13); // Copy 13 caracter (incluyendo el null)

    printf("La cadena de destino es: %s\n", dest);

    return 0;
}*/