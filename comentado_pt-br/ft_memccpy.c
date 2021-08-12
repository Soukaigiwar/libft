/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:33:25 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 09:51:20 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memccpy() function copies no more than n bytes from memory
//        area src to memory area dest, stopping when the character c is
//        found.

// A função ft_memccpy() copia um dado número de bytes n de uma determinada
// variável *src para *dst e pára de copiar quando dado caracter c é 
// encontrado.

#include "libft.h"

// Recebe 4 parâmetros: 
//			variável destino, 
//			variável origem, 
//			caracter a ser encontrado,
//			número de bytes a serem copiados
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	
	// Testa se destino ou origem são nulos.
	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		// Atribui cada posição de dst o valor de src
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		// Verifica se na posição de src foi encontrado caracter c.
		if (*(unsigned char *)(src + i) == (unsigned char)c)
		// Retorna uma posição a frente do último byte.
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
