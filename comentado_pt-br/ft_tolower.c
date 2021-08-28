/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:33:11 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:12:26 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_toupper converte caracteres passados em int c de maiúsculo para 
// minúsculo.
// O retorno é o inteiro c que representa o caracter na tabela ascii.

int	ft_tolower(int c)
{
	// verifica se o caracter passado é letra maiúscula
	if (c >= 65 && c <= 90)
	// soma 32 para cair na mesma letra da tabela ascii, agora minúsucula.
		c += 32;
	return (c);
}
