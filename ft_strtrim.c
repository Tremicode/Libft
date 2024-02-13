/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:34:24 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/13 12:07:13 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *resulttrimmed;
	size_t start;
	size_t end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;

	while (s1[start] && ft_strchr(set, s1[start]))
		/*encuentra 1er caracter no perteneciente a set desde el principio*/
		start++;
	if (start == end + 1)
		return (ft_strdup(""));
	/*verifica si la cadena esta compuesta por caracteres set*/
	while (ft_strchr(set, s1[end]))
		end--;
	resulttrimmed = ft_substr(s1, start, end - start + 1);

	if (!resulttrimmed)
		return (NULL);

	return (resulttrimmed);
}