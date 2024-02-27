/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:14:28 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/27 11:17:10 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;
	char	convertchar;

	convertchar = (char)c;
	result = 0;
	while (*str != '\0')
	{
		if (*str == convertchar)
			result = ((char *)str);
		str++;
	}
	if (convertchar == '\0')
		return ((char *)str);
	return (result);
}

/*int	main(void)
{
	const char	*cadena = "hola mundo mundano";
	int			caracter_buscar;
	char		*resultado;

	caracter_buscar = 'm';
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
