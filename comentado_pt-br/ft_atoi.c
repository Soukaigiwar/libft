/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:05 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 08:25:03 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	The atoi() function converts the initial portion of the string 
//	pointed to by nptr to int. 

// A função ft_atoi converte uma dada string informada por (const char *nptr)
//	em um int seguindo as seguintes regras:
//	- Ignora os espaços e quaisquer outros caracteres não imprimíveis da 
//		tabela ascii (espaço, tab, line feed, carriage return, etc).
//	- Se encontrado sinal de - (menos) ou + (mais), fazer o devido tratamento.
//	- Quando encontrar um caracter que não numérico pára e encerra a conversão.
//		retornando o int encontrado até então.
//	- Trata os casos onde um int é maior que o MAX_INT E menor que MIN_INT.	
//	- Retorna nulo quando não encontra caracter numérico.
//	- Retorna um int do número convertido.

//	Verifica se tem no char passado à função algum caracter não imprimível.
int	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\r'
		|| c == '\v'
		|| c == '\f');
}


int	ft_atoi(const char *nptr)
{
	// long previne calculos errados quando número fora do intervalo do int
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	// Verifica se encontra sinal negativo ou positivo.
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		// Modifica sign para -1 quando encontra sinal de - (menos)
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	// Verifica se é um caracter numérico
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		// Verifica se int formado excede o MIN_INT e MAX_INT.
		// Caso ultrapasse o limite, retorna NULL
		if (result < -2147483648 || result > 2147483647)
			return (0);
		// result recebe ele mesmo * 10 para assim, reservar a última
		// unidade para o próximo caracter resultante de nptr[i] - '0'
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	// retorna result * sign para tratar o sinal de negativo quando aplicável
	return ((int)result * sign);
}
