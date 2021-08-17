/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:01:19 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/17 09:48:30 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// A função ft_memchr encontra a primeira vez que um dado caracter c 
// numa dada string s, retornando o ponteiro para a posição do 
// byte encontrado. Se não encontrar tal caracter, retorna NULL.

void	*ft_memchr(const void *str, int c, size_t n)
{

// Equanto a quantidade passada em size_t n não chega a zero, isto é,
// o tamanho em caracteres a ser pesquisado entramos no while.
	while (n--)
	{
// Comparamos se o caracter do ponteiro str é igual ao caracter a ser
// pesquisado, caso verdadeiro, retornamos essa posição.
// EX:
//
// *str1 = "Encontre o caracter c."
// ft_memchr(str1, 'c', 6);
// Retorno: "contre o caracter c."
// A função retornou o ponto onde foi encontrado a primeira ocorrência
// do caracter c que foi o terceiro caracter da string.
//
// *str2 = "Encontre o caracter t."
// ft_memchr(str2, 't', 4);
// Retorno: NULL por que nos primeiros 4 caracteres não foi encontrado 't'
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
