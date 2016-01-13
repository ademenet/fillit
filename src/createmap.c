/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:57 by ademenet          #+#    #+#             */
/*   Updated: 2016/01/13 17:49:25 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int			ft_bsq(int nb)
{
	int		bsq;

	bsq = ft_round(ft_sqrt(nb * 4));
	return (bsq);
}

char		**ft_createmap(int bsq)
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

void		ft_display(char **map, int sze_sqr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < sze_sqr)
	{
		while (j < sze_sqr)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		i++;
		j = 0;
		write(1, "\n", 1);
	}
}

int			ft_sharp_check(char *buf, int line, int *cnts)
{
	int		cur;
	int		shrp_cnt;
	int		dot_cnt;

	cur = 0;
	shrp_cnt = 0;
	dot_cnt = 0;
	while (buf[cur] != '\n')
	{
		shrp_cnt = buf[line * 5 + cur] == '#' ? shrp_cnt + 1 : shrp_cnt;
		dot_cnt = buf[line * 5 + cur] == '.' ? dot_cnt + 1 : dot_cnt;
		cur++;
	}
	if (shrp_cnt + dot_cnt != 4)
		return (0);
	if (line < 3 && cnts[1] > 0 && cnts[1] < 4 && !(buf[cnts[4]] == '#'
				|| buf[cnts[4] + 1] == '#' || buf[cnts[4] + 2] == '#'
				|| buf[cnts[4] + 3] == '#'))
		return (0);
	return (1);
}
