/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:57 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/11 12:14:15 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strset(const char *str, )

char	**ft_createmap(int bsq)
{
	char	**map_y;
	char	*map_x;
	int		i;

	map_y = (char**)malloc(bsq * sizeof(char*));
	while (map_y[i])
	{
		map_x = ft_strnew(bsq);
		ft_strset(map_x, '.');
		map_y[i] = map_x;
		i++;
	}
	return (map_y);
}
