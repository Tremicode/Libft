/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:34:17 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/30 12:20:51 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while ((*str != '\0') && (*str != (char)c))
		str++;
	if (*str == (char)c)
		return ((char *)str);

		return NULL;
}

/*int	main(void)
{
	const char	*text = "Hello world";
	char		*result;

	result = ft_strchr(text, 'e');
	if (result != NULL)
	{
		printf("char encontrado: %c\n", *result);
	}
	else
	{
		printf("char no encontrado\n");
	}
	return (0);
}*/
