/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:18 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/22 15:03:44 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int		ft_check(int *p0, int bsq, char **map, t_tetri tetris)
{
	if (!(ft_trace(p0[1], p0[0], bsq) && ft_collide(p0[1], p0[0], map)))
		return (0);
	if (!(ft_trace(tetris.p1[1], tetris.p1[0], bsq) &&
				ft_collide(tetris.p1[1], tetris.p1[0], map)))
		return (0);
	if (!(ft_trace(tetris.p2[1], tetris.p2[0], bsq) &&
				ft_collide(tetris.p2[1], tetris.p2[0], map)))
		return (0);
	if (!(ft_trace(tetris.p3[1], tetris.p3[0], bsq) &&
				ft_collide(tetris.p3[1], tetris.p3[0], map)))
		return (0);
	return (1);
}

int		backtracking(t_tetri *tetris, char **map, int bsq, int y, int x)
{
	int		p0[2];
	int		i;

	i = 0;
	if (p0[0] == bsq - 1 && p0[1] == bsq - 1)
		return (1);
	if (ft_check(p0, bsq, map, tetris[i]))
	{
		ft_printmap(map, p0, tetris[i], i);
		if (x == bsq - 1)
		{
			backtracking(&tetris[i + 1], map, bsq, y + 1, 0);
		}
		else
		{
			backtracking(&tetris[i + 1], map, bsq, y, x + 1);
		}
	}
	return (0);
}
