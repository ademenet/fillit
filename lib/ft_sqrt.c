/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:58:28 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/21 16:08:35 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

long	ft_sqrt(int nb)
{
	long	n;
	long	p;
	long	low;
	long	high;

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
