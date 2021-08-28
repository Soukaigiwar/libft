/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 22:56:35 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 22:56:36 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strdup duplica uma string para um ponteiro.
// Para caber todos os ela calcula o tamanho e usa malloc(len * sizeof(*str))
// na nova variável duplicada. Ou retorna NULL se não houver espaço para tal.

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*p;

	// calcula tamanho em caracteres de str e considera \0 no fim da string com + 1.
	len = (ft_strlen((char *)str) + 1);
	// aloca espaço na memória para receber conteúdo.
	p = (char *)malloc(len * sizeof(*str));
	// se alocação falhar ou len ou *str passado forem 0 ou nulos, retorna NULL.
	if (!p)
		return (NULL);
	// copia string str para dentro da string p a partir da posição len.
	ft_strlcpy(p, str, len);
	// retorna ponteiro p que é uma duplicata de *str.
	return (p);
}
