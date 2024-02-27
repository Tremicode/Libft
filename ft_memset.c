/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:42:52 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/26 16:59:40 by ctremino         ###   ########.fr       */
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

/*#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definimos un buffer de caracteres
    char buffer[11];

    // Llenamos el buffer con el carácter 'X' utilizando ft_memset
    ft_memset(buffer, 'X', 11);

    // Imprimi contenido del buffer para verificar llenado ok
    printf("El contenido del buffer es: %s\n", buffer);

    return 0;
}*/
