/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:57 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/11 18:47:02 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size);
char	*ft_strsetnew(char c, int size);

char	**ft_createmap(int bsq)
{
	char	**map_y;
	char	*map_x;
	int		i;

	map_y = (char**)malloc(bsq * sizeof(char*));
	if (map_y)
	{
		i = bsq;
		while (--i)
		{
			map_x = ft_strsetnew('.', bsq);
			*map_y = map_x;
			map_y++;
		}
		return (map_y);
	}
	return (0);
}
