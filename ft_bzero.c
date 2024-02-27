/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:22:06 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/26 12:48:34 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)

{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*int main() {
    char str[10] = "Hello";

    printf("Antes de bzero: %s\n", str);
    ft_bzero(str, 5); // Borra los primeros 5 bytes de str
    printf("Después de bzero: %s\n", str);

    return 0;
}*/
