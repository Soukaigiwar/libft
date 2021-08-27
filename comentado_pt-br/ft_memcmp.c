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

// A função memcmp() compara os primeiros bytes n (representados como unsigned
// char) das posições da memória fornecidas pelos ponteiros *str1 e *str2.
// A comparaç

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	if (!n)
		return (0);
	while (*(unsigned char *)str1 == *(unsigned char *)str2 && --n)
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
