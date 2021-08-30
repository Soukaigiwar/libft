/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:22:51 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 21:42:44 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strnsct encontra uma string *substr dentro do comprimento len
// da string *str.
// O retorno da função é o trecho encontrado, caso nada seja encontrado,
// o retorno é nulo.
#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	substr_len;
	// testa se substr ou str foram passadas vazias como parâmetro, caso
	// verdadeiro, retorna str.
	if (!(*substr) || !(*str))
		return ((char *)str);
	// testa se substr ou str foram passadas nulas, caso verdadeiro,
	// retorna nulo.
	if ((char *)substr == NULL || (char *)str == NULL)
		return (NULL);
	substr_len = ft_strlen((char *)substr);
	// se str ou substr forem passadas vazias, retorna str.
	if (!str || !substr)
		return ((char *)str);
	// enquanto *str, len, e len for maior ou igual a substr_len
	// e se a comparação de substr[substr_len] e str der match, retorna
	// str, senao incrementa ponteiro de str e continua buscando até
	// o fim de len.
	while (*str && len && len-- >= substr_len)
	{
		if (!ft_strncmp(str, substr, substr_len))
			return ((char *)str);
		else
			++str;
	}
	// caso nada seja encontrado, retorna nulo.
	return (NULL);
}
