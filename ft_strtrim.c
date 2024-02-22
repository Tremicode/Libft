/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:34:24 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/22 17:15:08 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*resulttrimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]))
		end--;
	resulttrimmed = ft_substr(s1, start, end - start + 1);
	if (!resulttrimmed)
		return (NULL);
	return (resulttrimmed);
}
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    //Definimos una cadena de caract de ejemplo y caract recortar
    const char *cadena = "  \tHola, mundo! \t ";
    const char *set = " \t";

    // Llamamos a ft_strtrim para recortar la cadena
    char *cadena_recortada = ft_strtrim(cadena, set);

    // Verificamos si el recorte fue exitoso
    if (cadena_recortada != NULL) {
        // Imprimimos la cadena recortada
        printf("Cadena recortada: \"%s\"\n", cadena_recortada);
        
        // Liberamos la memoria asignada para la cadena recortada
        free(cadena_recortada);
    } else {
        printf("Error: No se pudo recortar la cadena.\n");
    }

    return 0;
}*/
