/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:22:51 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:11:08 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*match;

	i = 0;
	j = 0;
	match = 0;
	if (little[i] == '\0' || big[i] == '\0')
		return (0);
	while (i < len - 1 && big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			j++;
			*match = big[i];
		}
		else
			j = 0;
		if (little[j] == '\0')
			return ((char *)big);
		i++;
	}
	return (0);
}
