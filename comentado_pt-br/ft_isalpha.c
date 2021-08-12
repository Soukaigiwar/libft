/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:25 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 09:23:35 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_isalpha() testa se dado caracter é uma letra entre:
// 'a' a 'z' ou 'A' a 'Z'
// retorna 1 quando é letra.
// retorna 0 quando não é letra.

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
