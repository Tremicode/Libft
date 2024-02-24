/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:33:54 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/23 18:45:59 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*int main() {
    char *str = "Creo la cadena"; // Creamos una cadena de caracteres

    // Llamamos a la función ft_putstr_fd, descriptor de archivo 1 (stdout)
    ft_putstr_fd(str, 1);

    return 0;
}*/
