/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctremino <ctremino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:57:44 by ctremino          #+#    #+#             */
/*   Updated: 2024/01/31 20:27:04 by ctremino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_toupper(int c);
/*int cambiar a mayusculas*/
int		ft_tolower(int c);
/* int cambiar a minusculas*/
int		ft_isalpha(int i);
/*verificar si un carácter es alfabético */
int		ft_isdigit(int c);
/* verifica si un carater es un digito del 0-9 */
int		ft_isalnum(int c);
/*verifica si un caracter es alphanumerico*/
int		ft_isprint(int c);

int		ft_atoi(const char *str);

int		ft_strcmp(const char *s1, const char *s2);

int 	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_calloc(size_t count, size_t size);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

#endif