/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:32:58 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/09 21:12:12 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*ps;

	ps = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ps = (char *)s;
		++s;
	}
	if (*s == (char)c)
		ps = (char *)s;
	return (ps);
}
