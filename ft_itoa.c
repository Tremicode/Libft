/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:16:26 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/10 13:48:10 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
/*funcion auxiliar para saber catidad de digitos que tiene un numero entero */
{
	int count;
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
		return (ft_strdup("-2147483648")); /* duplica la cadena,
			devuelve un nuevo bloque de memoria para que itoa apunte a una direcion unica */
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	i = ft_digit_count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
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
