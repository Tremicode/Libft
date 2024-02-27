/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:56:07 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/26 15:57:01 by ctremino         ###   ########.fr       */
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
/*#include <stdio.h> // Necesario para printf

int main(void)
{
    // Definimos dos arrays de caracteres
    char s1[] = "Hello people 42";
    char s2[] = "Hello";

    // Llamamos a ft_memcmp para comparar los dos arrays hasta el quinto carácter
    int result = ft_memcmp(s1, s2, 5);


    if (result == 0)
        printf("Los primeros 5 caracteres de s1 y s2 son iguales.\n");
    else if (result < 0)
        printf("El primer caracter diferente en s1 es menor que en s2.\n");
    else
        printf("El primer caracter diferente en s1 es mayor que en s2.\n");

    return 0;
}*/
