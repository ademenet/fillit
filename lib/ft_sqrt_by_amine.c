/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_by_amine.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 02:27:35 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/23 03:03:00 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float	ft_sqrt_by_amine (int nb)
{
	float 	cnt;
	float	res;

	res = 0;
	cnt = 1;
	if (nb <= 0)
		return (0);
	while (cnt * cnt < nb * 10000)
	{
		cnt++;
		res++;
	}
	return (res / 100);
}
