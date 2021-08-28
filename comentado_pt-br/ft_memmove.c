/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:56:28 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 22:56:29 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função memmove copia um dado número de bytes len de src para dst
// indicados por seus ponteiros. A cópia é feita numa variável temporária para
// não sobrescrever o próprio dst.
// ex: Copiar o trecho "escrever" para o inicio da string 
//
//				*src:		  "Sobrescrever"
// 				antes:		  	   [------]
//				depois:   	   [------]	 
//				*dst:		  "escreverever"
//							Ocupam os mesmos bytes
// O retorno é dst.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	// variável temporária para não sobrescrever dst antes da hora.
	unsigned char	*pd;

	pd = (unsigned char *)dst;
	//testa se dst é maior (ocupa mais bytes) que src.
	if (dst > src)
	{
		while (len--)
			*(pd + len) = *(unsigned char *)(src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
