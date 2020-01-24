/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:47:14 by cphillip          #+#    #+#             */
/*   Updated: 2019/11/01 12:50:41 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystk, const char *needle, size_t len)
{
	int		pos;
	size_t	i;

	i = 0;
	pos = 0;
	if (!*needle)
		return ((char *)haystk);
	while (haystk[pos] && len)
	{
		i = 0;
		if (needle[i] == haystk[pos + i])
		{
			while (needle[i] == haystk[pos + i] && i < len)
			{
				i++;
				if (needle[i] == '\0')
					return ((char *)&haystk[pos]);
			}
		}
		pos++;
		len--;
	}
	return (NULL);
}
