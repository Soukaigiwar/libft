/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:32:03 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 22:36:14 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função memcpy copy um dado número de bytes len de src para dst indicados
// por seus ponteiros
// O retorno é o ponteiro de dst

#include "libft.h"

void
	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	// testa se dst não tem espaço reservado. 
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		// enquanto i < len copia cada byte da memoria de src para dst
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
