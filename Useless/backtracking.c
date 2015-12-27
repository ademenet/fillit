/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:18 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/23 16:29:09 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check(int pos, int bsq, char **map, t_tetri tetris)
{
	int		x;
	int		y;

	x = pos % bsq;
	y = pos / bsq;
	if (!(ft_trace(x, y, bsq) && ft_collide(x, y, map)))
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

int		backtracking(t_tetri *tetris, char **map, int bsq, int pos)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = pos % bsq;
	y = pos / bsq;
	if (tetris == NULL)
		return (1);
	if (ft_check(pos, bsq, map, *tetris))
	{
		map[y][x] = i + 'A';
		map[y + tetris.p1[0]][x + tetris.p1[1]] = i + 'A';
		map[y + tetris.p2[0]][x + tetris.p2[1]] = i + 'A';
		map[y + tetris.p3[0]][x + tetris.p3[1]] = i + 'A';
		backtracking(tetris + 1, map, bsq, pos + 1);
	}
	map[y][x] = '.';
	map[y + tetris.p1[0]][x + tetris.p1[1]] = '.';
	map[y + tetris.p2[0]][x + tetris.p2[1]] = '.';
	map[y + tetris.p3[0]][x + tetris.p3[1]] = '.';
	return (0);
}
