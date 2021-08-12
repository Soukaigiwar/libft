/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:30 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 09:25:56 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_isascii() testa se dado caracter é um caracter da
// tabela ascii
// de 'a' a 'z' ou 'A' a 'Z'
// de 0 a 9
// inclusive os caracteres não imprimíveis.
// retorna 1 quando positivo.
// retorna 0 quando negativo.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
