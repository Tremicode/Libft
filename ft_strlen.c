/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:27:59 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/23 16:12:41 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen( const char *str)
{
	size_t	n;

	n = 0;
	while ((str[n] != '\0'))
		n++;
	return (n);
}

/*int	main(void)

{
	printf("%zu\n", ft_strlen("dddf"));
}*/
