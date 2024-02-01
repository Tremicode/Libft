/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:14:28 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/23 15:42:48 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_ocurrence = NULL;

	while (*str != '\0')
	{
		if (*str == c)
			last_ocurrence = str;
	}
	str++;
	return ((char *)last_ocurrence);
}

/*int	main(void)
{
	const char	*cadena = "hola mundo";
	int			caracter_buscar;
	char		*resultado;

	caracter_buscar = 'o';
	resultado = ft_strrchr(cadena, caracter_buscar);
	if (resultado != NULL)
	{
		printf("ultima ocurrencia'%c', posicion %s\n ", caracter_buscar,
			resultado);
	}
	else
	{
		printf("no esta en la cadena '%c'.\n ", caracter_buscar);
	}
	return (0);
}*/
