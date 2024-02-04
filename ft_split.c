/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:11:42 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/04 18:54:55 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int 	ft_wordlen(char const *s, char c) /*fun auxiliar calcula long de una palabra */
{
	int len  = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}	
	return (len);
}
static int	ft_countwords(char const *s, char c) /* fun aux para contar palabras en la cadena*/
{
	int count = 0;
	while (*s)
	{
		if  (*s != c)
		{
			count++;
			s += ft_wordlen(s,c);
		}
		else
			s++;
	}
	return (count);
}
char	**ft_split(char const *s, char c) /*funcion principal para dividir la cadena en palabras*/
{
	char	**strs;
	int		i;
	int 	count;

	if (!s) /*verifica si la cadena de entrada es nula*/
		return (NULL);

	count = ft_countwords(s,c);
	strs = malloc(sizeof(char  *) *(count + 1));

	if (!strs)
		return (NULL);
	strs[count] = NULL; /*marca el final del arreglo */
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, ft_wordlen(s, c)); /* extraer subcadema y almacenar en el arreglo*/
			if (!strs[i++])
				return (free_strs(strs));
			s += ft_wordlen (s,c);
		}
		else
			s++;
	}
	return (strs);
}