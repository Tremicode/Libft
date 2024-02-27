/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:58:19 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/26 19:08:44 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}

/*#include <stdio.h> // Necesario para printf
#include <stdlib.h> // Necesario para free


int	main(void)
{
	int	*array;

	// Llamamos a ft_calloc para reservar memoria para un array de 4 enteros
	array = (int *)ft_calloc(4, sizeof(int));
	
	// Verificamos si la asignación de memoria fue exitosa
	if (array == NULL)
	{
		printf("error: no se puede asignar memoria\n");
		return (1);
	}
	
	// Asignamos valores al array
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;
	
	// Imprimimos los valores del array
	printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
	
	// Liberamos la memoria asignada al array
	free(array);
	
	return (0);
}*/
