/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:15:56 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/31 16:30:21 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicado;
	size_t	len;

	len = ft_strlen(s1);                         
		/*calcula long cadena de entrada*/
	duplicado = malloc(sizeof (char) * (len + 1));
		/*dar memoria a la cadena nueva*/
	if (!duplicado)
		return (NULL);
	ft_strlcpy(duplicado, s1, len + 1);
		/*copia el contenido de la cadena original a la cadena nueva*/
	return (duplicado);
}

/*#include <stdio.h>

int main(void)
{
    const char *original = "Hola, mundo!";
    char *duplicado = ft_strdup(original);

    if (duplicado)
    {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicado);

        // Recuerda liberar la memoria asignada dinámicamente cuando ya no la necesites
        free(duplicado);
    }
    else
    {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}*/
