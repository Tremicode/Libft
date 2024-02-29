/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:45:05 by ctremino          #+#    #+#             */
/*   Updated: 2024/02/27 12:57:47 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

/*#include <fcntl.h> //  constantes O_WRONLY y O_CREAT

int main() {
    int fd; 
    int numero = 12345; 

    //  archivo "output.txt" en modo escritura, si no existe lo crea
    fd = open("output.txt", O_WRONLY | O_CREAT, 0644);

    // Verificamos 
    if (fd == -1) {
        ft_putstr_fd("Error al abrir el archivo\n", 2); // 
        return 1; 
    }

    // Llamamos a nuestra función para imprimir el número en el archivo
    ft_putnbr_fd(numero, fd);

    close(fd);

    return 0; 
}*/
