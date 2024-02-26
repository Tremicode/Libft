/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:32:22 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 21:02:29 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, len_s1);
	ft_memcpy(result + len_s1, s2, len_s2 + 1);
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Cadenas de ejemplo
    char s1[] = "Pipas, ";
    char s2[] = "Peladas!";

    // Llamamos a ft_strjoin para concatenar las cadenas
    char *result = ft_strjoin(s1, s2);

    // Verificamos si la llamada a ft_strjoin fue exitosa
    if (result != NULL) {
        // Imprimimos el resultado
        printf("Cadena concatenada: %s\n", result);

        // Liberamos la memoria asignada a result
        free(result);
    } else {
        printf("Error: no se pudo concatenar las cadenas.\n");
    }

    return 0;
}*/
