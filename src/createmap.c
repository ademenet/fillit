/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:57 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/29 18:26:59 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		ft_bsq(int nb)
{
	int		bsq;

	bsq = ft_round(ft_sqrt(nb * 4));
	return (bsq);
}

char	**ft_createmap(int bsq)
{
	char	**map_y;
	char	*map_x;
	int		i;

	map_y = (char**)malloc((bsq + 1) * sizeof(char*));
	if (!map_y)
		return (NULL);
	i = bsq;
	map_y[i] = NULL;
	while (--i >= 0)
	{
		map_x = ft_strsetnew('.', bsq);
		map_y[i] = map_x;
	}
	return (map_y);
}
