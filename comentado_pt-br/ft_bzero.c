/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:18:02 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 08:37:48 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_bzero coloca o caracter nulo \0 em cada posição da memoria
// de uma dada variável, seja ela o tipo que for até o número de bytes informado
// por size_t n.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	// o uso da função bzero() não é mais recomendado devido a falhas de
	// segurança e recomenda-se o uso da função memset no seu lugar. 
	ft_memset(s, 0, n);
}
