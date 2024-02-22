/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:22:25 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/22 17:19:42 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <fcntl.h>   // Para funciones de manejo de archivos
#include <unistd.h>  // Para la función write


int main() {
    // Abrimos un archivo para escritura (si no existe, se creará)
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // Verificamos si se pudo abrir el archivo correctamente
    if (fd == -1) {
        // Si hay un error imprimimos un mensaje de error y salimos
        ft_putstr_fd("Error al abrir el archivo.\n", STDERR_FILENO);
        return 1;
    }

    // Escribimos un carácter en el archivo
    char character = 'A';
    ft_putchar_fd(character, fd);

    // Cerramos el archivo
    close(fd);

    // Informamos que se escribió el carácter en el archivo
    ft_putstr_fd("Se escribió carácter en el archivo ok.\n", STDERR_FILENO);

    return 0;
}*/
