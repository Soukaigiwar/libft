/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:48:21 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/11 21:48:22 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


The strlcpy() and strlcat() functions copy and concatenate strings respectively. 
They are designed to be safer, more consistent, and less error prone 
replacements for strncpy(3) and strncat(3). Unlike those functions, 
strlcpy() and strlcat() take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is larger than 0 or,
in the case of strlcat(), as long as there is at least one byte free in dst). 
Note that a byte for the NUL should be included in size. Also note that strlcpy() 
and strlcat() only operate on true ''C'' strings. This means that for strlcpy() 
src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

The strlcpy() function copies up to size - 1 characters from the NUL-terminated 
string src to dst, NUL-terminating the result.

The strlcat() function appends the NUL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

Return Values
The strlcpy() and strlcat() functions return the total length of the string they 
tried to create. For strlcpy() that means the length of src. For strlcat() that 
means the initial length of dst plus the length of src. While this may seem somewhat 
confusing, it was done to make truncation detection simple.

Note, however, that if strlcat() traverses size characters without finding a NUL, 
the length of the string is considered to be size and the destination string will 
not be NUL-terminated (since there was no space for the NUL). This keeps strlcat() 
from running off the end of a string. In practice this should not happen (as it 
means that either size is incorrect or that dst is not a proper ''C'' string). 
The check exists to prevent potential security problems in incorrect code.
// A função ft_strlcat concatena a string *src ao final de *dst.
// Ela previne que o comprimento da string final seja o suficiente pra caber *src
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	dst_size;
	size_t	src_size;

	// src_len recebe o comprimento de *src
	src_size = (ft_strlen((char *)src));
	dst_size = 0;

	// enquanto percorre dst e dst_len é menor que o size passado como parâmetro
	// incrementa dst_len
	while (dst[dst_size] && dst_size < size)
		++dst_size;
	// se size passado como parâmetro for menor que a dst_size + src_size + 1, 
	// entra no while alterar nada, pois desse jeito não caberia o caracter '\0' no fim de *dst
	while ((src[src_size]) && ((dst_size + src_size + 1) < size))
	{
		dst[dst_size + src_size] = src[src_size];
		src_size++;
	}
	if (dst_size != size)
		dst[dst_size + src_size] = '\0';
	return (dst_size + ft_strlen(src));
}
