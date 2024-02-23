/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:35:11 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/23 14:49:22 by ctremino         ###   ########.fr       */
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
    int fd; // Descriptor de archivo
    char *cadena = "¡Hola, mundo estoy probando un fd!";

    // Abrimos un archivo "salida.txt" en modo de escritura.
    fd = open("salida.txt", O_WRONLY | O_CREAT, 0644);

    // Verificamos si la apertura del archivo fue exitosa
    if (fd == -1) {
        ft_putendl_fd("Error al abrir el archivo", 2); // Imprimimos mensj error
        return 1; // Salimos del programa con un código de error
    }

    // Llamamos a nuestra función para imprimir la cadena en el archivo
    ft_putendl_fd(cadena, fd);

    // Cerramos el archivo
    close(fd);

    return 0; // Salimos del programa con éxito
}*/
