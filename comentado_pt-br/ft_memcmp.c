/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:53:46 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 21:59:53 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função memcmp() compara os primeiros bytes n das posições da memória 
// fornecidas pelos ponteiros *str1 e *str2.
// A comparação se dá pela diferença na tabela ascii dos caracteres passados. 
// A função retorna 0 se não houver diferenças ou qualquer número diferente,
// caso os caracteres sejam diferentes.

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	if (!n)
		return (0);

	// compara se ponteiro de str1 igual ponteiro de str2
	// e se número de posições nos ponteiros chegou ao fim.
	while (*(unsigned char *)str1 == *(unsigned char *)str2 && --n)
	{
		str1++;
		str2++;
	}
	// retorna a diferença entre eles na tabela ascii.
	// ex: 
	// ('a' = 97 (ascii)) - ('a' = 97 (ascii)) = 0 --> caracteres iguais
	// ('b' = 98 (ascii)) - ('a' = 97 (ascii)) = 1 --> caracteres diferentes
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
