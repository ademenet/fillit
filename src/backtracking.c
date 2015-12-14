/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:37:18 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/14 15:32:16 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft backtracking(struct piece, char **map)
int		coord[2];

si p0x > x alors p0x = 0 et p0y + 1

si coord p1 appartient a tab, verifier p2, puis p3
	si ok
		remplacer coordonnees par index tab + 'A'
		rappeler fonction avec piece suivante
	si non
		coordonnee p0x + 1
si derniere piece placee
	retourner map

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

int		backtracking(t_tetri *tetris, char **map, int bsq, int p0[2])
{
	int		p0[2];
	int		i;

	if (p0 = {bsq - 1, bsq - 1})
		return (1);
	if (ft_check(p0, bsq, map, tetris[i]))
	{
		map[p0[0]][p0[1]] = i + 'A';
		map[tetris[i].p1[0]][tetris[i].p1[1]] = i + 'A';
		map[tetris[i].p2[0]][tetris[i].p2[1]] = i + 'A';
		map[tetris[i].p3[0]][tetris[i].p3[1]] = i + 'A';
		p0 
		backtracking(tetris[i + 1]);
	}
}
