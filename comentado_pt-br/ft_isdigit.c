/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:33 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 09:27:09 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_isdigit() testa se dado caracter é número entre 0 e 9
// retorna 1 quando é um número.
// retorna 0 quando não é um número.

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
