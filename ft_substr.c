/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:52:07 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/26 19:47:18 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*#include <stdio.h>
#include <stdlib.h>


int main() {
    // Definimos una cadena de caracteres
    char *cadena = "Esto es una cadena de ejemplo";

    // Extraemos una subcadena de longitud 10, comenzando desde el índice 5
    char *subcadena = ft_substr(cadena, 5, 10);

    // Imprimimos la subcadena resultante
    printf("La subcadena es: %s\n", subcadena);

    // Liberamos la memoria asignada para la subcadena
    free(subcadena);

    return 0;
}*/
