/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:51:11 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/12 10:55:46 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <studio.h>*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needlesize;

	needlesize = ft_strlen(needle);
	if (needlesize == 0)
		return ((char *) haystack);
	i = 0;
	while (i < len && haystack[i] != '\0' && needlesize + i <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0'
			&& j < needlesize)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	haystack[50] = "hola gente";
	char	needle[10] = "gente";
	char	*result;

	result = strstr(haystack, needle);
	printf("substring is %s\n", result);
	return (0);
}
*/