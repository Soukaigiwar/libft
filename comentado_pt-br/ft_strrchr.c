/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:58 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:12:12 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strrchr retorna a última ocorrência do caracter passado em char c
// na string s.
// O retorno da função é o ponteiro para o char encontrado, caso não seja
// encontrado, é retornado um NULL.

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	// variável temporária para inicializada com NULL
	char	*ps;

	ps = NULL;
	// enquanto não termina o comprimento da string s
	while (*s)
	{
		// se encontrado caracter c, copia ponteiro de s para ps
		if (*s == (char)c)
			ps = (char *)s;
		++s;
	}
	// preve que o caracter buscado seja o caracter nulo, quando a string está
	// vazia. retorna o ponteiro de s na posição do caracter nulo.
	if (*s == (char)c)
		ps = (char *)s;
	return (ps);
}
