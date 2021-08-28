/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:33:15 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:12:36 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_toupper converte caracteres passados em int c de minúsculo para 
// maiúsculo.
// O retorno é o inteiro c que representa o caracter na tabela ascii.

int	ft_toupper(int c)
{
	// verifica se o caracter passado é letra minúscula
	if (c >= 97 && c <= 122)
		// subtrai 32 para cair na mesma letra da tabela ascii, agora maiúsucula.
		c -= 32;
	return (c);
}
