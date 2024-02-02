/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:51:11 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/02 01:17:35 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return (NULL);
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
			j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
	}
	i++ 
	return NULL;
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