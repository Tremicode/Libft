/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:49:49 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/22 17:21:51 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cont;

	cont = 0;
	if (!src && !dst)
		return (0);
	if (src < dst)
	{
		cont = len;
		while (cont > 0)
		{
			cont--;
			((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
		}
	}
	else
	{
		cont = 0;
		while (cont < len)
		{
			((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
			cont++;
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <stdlib.h> // Incluimos esta librería para usar la función malloc

int main() {
    // Definimos una cadena de caracteres de origen
    char src[] = "Hello, world!";
    // Declar buffer dest con suficiente espacio para almacenar la cadena de src
    char dest[20];

    // Copiamos la cadena de origen en el buffer de destino utilizando ft_memmove
    ft_memmove(dest, src, 13); // Copy 13 caracter + el carácter nulo)

    // Imprimimos la cadena de destino para verificar si se copió correctamente
    printf("La cadena de destino es: %s\n", dest);

    return 0;
}*/
