/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:15:56 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 20:52:59 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicado;
	size_t	len;

	len = ft_strlen(s1);
	duplicado = malloc(sizeof(char) * (len + 1));
	if (!duplicado)
		return (NULL);
	ft_strlcpy(duplicado, s1, len + 1);
	return (duplicado);
}

/*#include <stdio.h>
#include <stdlib.h>


int main() {
    // Definimos una cadena de caracteres
    const char *cadena_original = "Hola, mundo!";

    // Duplicamos la cadena utilizando ft_strdup
    char *cadena_duplicada = ft_strdup(cadena_original);

    // Verificamos si la duplicación fue exitosa
    if (cadena_duplicada != NULL) {
        // Imprimimos la cadena duplicada
        printf("Cadena duplicada: %s\n", cadena_duplicada);
        
        // Liberamos la memoria asignada para la cadena duplicada
        free(cadena_duplicada);
    } else {
        printf("Error: No se pudo duplicar la cadena.\n");
    }

    return 0;
}*/
