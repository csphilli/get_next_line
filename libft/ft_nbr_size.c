/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:27:34 by cphillip          #+#    #+#             */
/*   Updated: 2019/10/31 14:33:50 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbr_size(int nbr)
{
	int	len;

	len = 0;
	len += (nbr < 0);
	while (nbr /= 10)
		len++;
	return (len);
}