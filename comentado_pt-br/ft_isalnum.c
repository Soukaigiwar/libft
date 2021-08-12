/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:38:20 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 09:03:50 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_isalnum testa se dado caracter fornecido pertence a categoria de
// dígitos (de 0 a 9) ou letras (de 'a' a 'z' ou de 'A' a 'Z').
// Utilizando-se das funções ft_isalpha() para identificar letras e ft_isdigit()
// para identificar números. 
// Retorna 1 para positivo e 0 caso o caracter testado não corresponda.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
