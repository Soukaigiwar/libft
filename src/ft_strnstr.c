/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shenriqu <shenriqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:22:51 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/16 16:24:01 by shenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *desert, const char *grain, size_t len)
{
	size_t	amountOfGrain;

	if (!(*grain) || !(*desert))
		return ((char *)desert);
	if ((char *)grain == NULL || (char *)desert == NULL)
		return (NULL);
	amountOfGrain = ft_strlen((char *)grain);
	if (!desert || !grain)
		return ((char *)desert);
	while (*desert && len && len-- >= amountOfGrain)
	{
		if (!ft_strncmp(desert, grain, amountOfGrain))
			return ((char *)desert);
		else
			++desert;
	}
	return (NULL);
}
