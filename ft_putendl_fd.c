/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:35:11 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/27 12:52:37 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*#include <fcntl.h> // Para las constantes O_WRONLY y O_CREAT


int main() {
    int fd; 
    char *cadena = "¡Hola, mundo estoy probando un fd!";

    // Abrimos un archivo 
    fd = open("salida.txt", O_WRONLY | O_CREAT, 0644);

    // Verificamos si es ok
    if (fd == -1) {
        ft_putendl_fd("Error al abrir el archivo", 2); 
        return 1; // Salimos del programa con un código de error
    }

    // Llamamos función para imprimir la cadena en el archivo
    ft_putendl_fd(cadena, fd);

    
    close(fd);

    return 0; 
}*/
