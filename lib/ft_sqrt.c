/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:58:28 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/22 15:45:52 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

double	ft_sqrt(double nb)
{
	double	n;
	double	p;
	double	low;
	double	high;

	if (2 > nb)
		return (nb);
	low = 0;
	high = nb;
	while (high > low + 1)
	{
		n = (high + low) / 2;
		p = n * n;
		if (nb < p)
			high = n;
		else if (nb > p)
			low = n;
		else
			break ;
	}
	return (nb == p ? n : low);
}
