/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:56:07 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/24 19:13:53 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
/*int main() {
    // Definir dos secuencias de datos para comparar
    char str1[] = "Hola a todos";
    char str2[] = "Hola";
    
    // Obtener la longitud de la secuencia más corta
    size_t len = sizeof(str1) < sizeof(str2) ? sizeof(str1) : sizeof(str2);
    
    // Llamar a la función ft_memcmp para comparar las secuencias
    int result = ft_memcmp(str1, str2, len);
    
    // Mostrar el resultado de la comparación
    if (result == 0) {
        printf("Las secuencias son iguales.\n");
    } else if (result < 0) {
        printf("La secuencia 1 es menor que la secuencia 2.\n");
    } else {
        printf("La secuencia 1 es mayor que la secuencia 2.\n");
    }
    
    return 0;
}*/
