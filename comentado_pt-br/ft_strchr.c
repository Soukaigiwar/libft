/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:48:03 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 21:48:09 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strchr retorna o ponteiro para o primeiro caracter passado como
// parâmetro int c na string *s.
// O retorno é o ponteiro para essa ocorrência ou o ponteiro inicial da string
// caso não seja encontrado tal caracter.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	// enquanto char s não encontrou \0.
	while (*s)
	{
		// se encontrar caracter casting --> (char)c
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	// previne caso passe um ponteiro nulo com um caracter nulo
	// nesse caso, retorna o ponteiro dele assim mesmo.
	if (*s == (char)c)
		return ((char *)s);
	// caso não encontre nada, retorna 0
	return (0);
}
