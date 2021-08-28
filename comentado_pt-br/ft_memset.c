/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:49:46 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:10:49 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função memset preeche os primeiros bytes len do endereço de memória
// apontador por *b com o caracter passado em int c.
// O retorno é o ponteiro para o endereço de memória.

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	// variável temporária
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len)
	{
		// posição p[num positivo - 1] recebe caracter ascii int c
		p[len - 1] = c;
		// até completar tamanho size_t len
		// decrementando até 0 que encerra while
		len--;
	}
	return (b);
}
