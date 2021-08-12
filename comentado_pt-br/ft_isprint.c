/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:37 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 09:29:16 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_isprint() testa se dado caracter é um caracter imprimível:
// caracteres de espaço, tab, line feed, etc. 
// números de 0 a 9.
// letras entre 'a' a 'z' ou 'A' a 'Z'
// retorna 1 quando é caracter imprimível.
// retorna 0 quando não é caracter imprimível.

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
