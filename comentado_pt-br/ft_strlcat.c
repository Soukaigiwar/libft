/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:48:21 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 21:48:22 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strlcat concatena a string *src ao final de *dst.
// Ela previne que o comprimento da string final seja o suficiente pra caber *src
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	dst_size;
	size_t	src_size;

	// src_len recebe o comprimento de *src
	src_size = (ft_strlen((char *)src));
	dst_size = 0;

	// enquanto percorre dst e dst_len é menor que o size passado como parâmetro
	// incrementa dst_len para ao final ter o tamanho compatível com a soma
	// das duas strings juntas.
	while (dst[dst_size] && dst_size < size)
		++dst_size;
	// se size passado como parâmetro for menor que a dst_size + src_size + 1, 
	// entra no while e copia um por um os caracteres.
	while ((src[src_size]) && ((dst_size + src_size + 1) < size))
	{
		dst[dst_size + src_size] = src[src_size];
		src_size++;
	}
	// ao final adiciona o caracter nulo na última posição de dst
	if (dst_size != size)
		dst[dst_size + src_size] = '\0';
	return (dst_size + ft_strlen(src));
}
