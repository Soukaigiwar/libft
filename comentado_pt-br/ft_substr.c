/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:59:46 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/30 08:09:54 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A função ft_substr extrai de *s um trecho entre start de tamanho len para uma nova
// string.
// O retorno da função é a string contendo o trecho extraído. 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

    i = 0;
    // Caso seja passado como parâmetro uma string *s vazia, o retorno é nulo.
	if (!s)
		return (NULL);
    // Caso seja passado um start maior que o len, o retorno é uma string vazia
    // fornecida por ft_strdup(""), a qual vai retornar uma string = "\0".
	if (start > ft_strlen(s))
		return (ft_strdup(""));
    // Reverva espaço na memória para str sendo seu tamanho, o número de caracteres + 1
	str = malloc(sizeof(char) * len + 1);
    // Se espaço não puder ser alocado, o retorno é nulo.
	if (str == NULL)
		return (NULL);
	
    while (len > i)
	{
        // Copia caracteres da posição start até len
    	str[i] = s[start + i];
		i++;
	}
    // coloca caracter nulo na última posição da string str a ser retornada.
	str[i] = '\0';
	return (str);
}
