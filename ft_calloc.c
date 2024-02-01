/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:58:19 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/26 11:00:41 by ctremino         ###   ########.fr       */
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
/*
int	main(void)
{
	int *array = (int *)ft_calloc(4, sizeof(int));
		asignar memoria para array
	if (array == NULL)
	{
		printf("error: no se puede asignar memoria\n");
		return (1);
	}
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;
	printf("%d %d %d %d\n", array[0], array[1], array[2], array[3]);
	free(array);
	return (0);
}
*/
