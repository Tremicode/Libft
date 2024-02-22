/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:16:26 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/22 18:45:08 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		ncpy;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	i = ft_digit_count(n);
	str = ft_calloc(sizeof(char), i + 1);
	if (!str)
		return (NULL);
	i--;
	if (ncpy == 0)
		str[i] = '0';
	while (ncpy > 0)
	{
		str[i--] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*#include <stdio.h>

int main() {
    int num = 1234500; // Número entero a convertir
    char *str_num; // Variable para almacenar la cadena resultante

    // Llamada a la función ft_itoa para convertir el número entero en una cadena
    str_num = ft_itoa(num);

    // Verificación de si la conversión fue exitosa
    if (str_num != NULL) {
        // Imprimir la cadena resultante
        printf("El número %d convertido en cadena es: %s\n", num, str_num);
        
        // Liberar la memoria asignada a la cadena resultante
        free(str_num);
    } else {
        printf("Error: No se pudo convertir el número en una cadena.\n");
    }

    return 0;
}*/
