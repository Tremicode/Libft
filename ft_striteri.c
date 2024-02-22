/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:21:32 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/22 16:04:02 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!f || !s)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}
/*#include <stdio.h>

// Función de ejemplo para imprimir el índice y el carácter de una cadena
void print_index_and_char(unsigned int index, char *c)
{
    printf("Índice: %u, Carácter: %c\n", index, *c);
}

int main()
{
    // Cadena de ejemplo
    char str[] = "Hola como estas";

    ft_striteri(str, &print_index_and_char);

    return 0;
}*/
