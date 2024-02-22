/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:59 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/21 21:29:06 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen( const char *str)
{
	size_t	n;

	n = 0;
	while ((str[n] != '\0'))
		n++;
	return (n);
}

/*#include <stdio.h>

int main()
 {
    const char *cadena = "Hola, mundo!"; // Definimos una cadena de caracteres

    // Llamamos a la función ft_strlen para calcular la longitud de la cadena
    size_t longitud = ft_strlen(cadena);

    // Imprimimos la longitud de la cadena
    printf("La longitud de la cadena \"%s\" es: %zu\n", cadena, longitud);

    return 0;
}*/