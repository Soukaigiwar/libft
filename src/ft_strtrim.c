/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:07:44 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/27 18:14:13 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	return (i);
}

static size_t	ft_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i > 0 )
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = ft_start(s1, set);
	end = ft_end(&s1[start], set);
	if (!s1 || !set)
		return (0);
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) - start - end);
	str = ft_substr(s1, start, end);
	return (str);
}
