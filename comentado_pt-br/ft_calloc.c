/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:55:59 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 08:57:31 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_calloc aloca espaço na memória para receber um dado número de 
// variáveis com determinado número referente ao tamanho em bytes (size) dessas 
// variáveis.
// Diferentemente da função malloc() que também faz isso, a calloc() o faz
// preenchendo com \0 em todos os bits. Prevenindo assim, ler espaços de memória
// com "lixo de memória".

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	
	// Reserva ao ponteiro *p o número de bits solicitados.
	p = malloc(count * size);
	if (!p)
		return (NULL);
	// Atribui a cada posição do ponteiro *p o valor \0 prevenindo que não
	// contenham "lixo de memória".
	ft_memset(p, '\0', (count * size));
	return (p);
}
