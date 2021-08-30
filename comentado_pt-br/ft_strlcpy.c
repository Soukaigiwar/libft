/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:47:43 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 21:47:44 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strlcpy copia a string src dentro de dst até o comprimento len e
// adiciona o caracter nulo no final da string dst.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	// caso o parâmetro src seja enviado vazio, retorna nulo. 
	if (!src)
		return (0);
	// src_len recebe o comprimento de src.
	src_len = ft_strlen((char *)src);
	// se len > 0, e enquanto len > 0 e src não chegou no caractere nulo,
	// copia um a um os caracteres de src para dst e adiciona o
	// caracter nulo ao final de dst 
	if (len)
	{
		while (--len && *src)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (src_len);
}
