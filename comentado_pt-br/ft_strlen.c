/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:48 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:11:16 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função ft_strlen calcula o comprimento da string s, excluindo o byte nulo.

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	// percorre o char a partir do início dado pelo *c até chegar no caracter
	// nulo '\0'
	while (*(unsigned char *)c++)
		i++;
	return (i);
}
