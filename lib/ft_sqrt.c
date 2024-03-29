/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 11:47:22 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/29 17:54:04 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_sqrt(int nb)
{
	float	cnt;
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
