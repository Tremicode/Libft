/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:14:46 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/27 11:58:08 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*#include <stdio.h>
#include <stdlib.h> // Necesario para la función malloc


// Función de ejemplo convertir un carácter a mayúsculas
    char to_uppercase(unsigned int index, char c)
	{
		index = 0;
        // Verificamos si el carácter es una letra minúscula
        if (c >= 'a' && c <= 'z')
		{
            // Si es así, lo convertimos a mayúsculas
            return c - 32;
        }
				return c;
				
    }
	
int main()
{
    // Cadena de entrada
    char input[30] = "Hola,Mundo!";

    // Llamamos a ft_strmapi para convertir la cadena a mayúsculas
    char *result = ft_strmapi(input, to_uppercase);

    // Verificamos si la llamada a ft_strmapi fue exitosa
    if (result != NULL) {
        printf("Cadena original: %s\n", input);
        printf("Cadena en mayúsculas: %s\n", result);
        
        // Liberamos la memoria asignada a result
        free(result);
    } else {
        printf("Error: no se pudo convertir la cadena.\n");
    }

    return 0;
}*/
