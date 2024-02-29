/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:33:54 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/27 15:16:47 by ctremino         ###   ########.fr       */
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
    char *str = "Creo la cadena"; 

    // Llamo función ft_putstr_fd, descriptor de archivo 1 (stdout)
    ft_putstr_fd(str, 1);

    return 0;
}*/
