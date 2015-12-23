/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:08:24 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/23 12:08:25 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"


static int		ft_around_tetri(t_tetri *tetri, char **map, int sze_sqr, int pos)
{
	int 		x;
	int 		y;
	int			px;
	int			py;

	x = pos % sze_sqr;
	y = pos / sze_sqr;
	if (x >= sze_sqr || y >= sze_sqr || x < 0 || y < 0 || map[y][x] != '.')
		return (0);
	px = x + tetri->p1[1];
	py = y + tetri->p1[0];
	if (px >= sze_sqr || py >= sze_sqr || px < 0 || py < 0 ||
		map[py][px] != '.')
		return (0);
	px = x + tetri->p2[1];
	py = y + tetri->p2[0];
	if (px >= sze_sqr || py >= sze_sqr || px < 0 || py < 0 ||
		map[py][px] != '.')
		return (0);
	px = x + tetri->p3[1];
	py = y + tetri->p3[0];
	if (px >= sze_sqr || py >= sze_sqr || px < 0 || py < 0 ||
		map[py][px] != '.')
		return (0);
	return (1);
}
static int		ft_place_tetri(t_tetri *tetri, char **map, int sze_sqr, int pos)
{
	int 		x;
	int 		y;

	x = pos % sze_sqr;
	y = pos / sze_sqr;
	if (ft_around_tetri(tetri, map, sze_sqr, pos))
	{
		map[y][x] = tetri->letter;
		map[y + tetri->p1[0]][x + tetri->p1[1]] = tetri->letter;
		map[y + tetri->p2[0]][x + tetri->p2[1]] = tetri->letter;
		map[y + tetri->p3[0]][x + tetri->p3[1]] = tetri->letter;
		return (1);
	}
	else
		return (0);
}

static int		ft_rec_fill_map(t_tetri *tetris, char **map, int sze_sqr, int pos)
{
	if(tetris->letter == '|')
		return (1);
	if (pos >= sze_sqr * sze_sqr )
		return (0);
	while(ft_place_tetri(tetris, map, sze_sqr, pos) == 0)
		pos++;
		ft_rec_fill_map(tetris++, map, sze_sqr, 0);
	else
		ft_rec_fill_map(tetris, map, sze_sqr, pos++);
	return (0);
	
}

void		ft_init(t_tetri *tetris, int pcs)
{
	int		sze_sqr;
	int		ind;
	char 	**map;

	ind = 0;
	sze_sqr = ft_bsq(pcs);
	if ((map = ft_createmap(sze_sqr)) == NULL)
		return ;
	ft_putstr(CYN);
	printf("%d\n", sze_sqr);
	ft_putstr(RESET);
	while (ft_rec_fill_map(tetris, map, sze_sqr, 0) == 0)
	{
		sze_sqr++;
		printf("echec, trop petit, nouvelle tentative avec la taille : %d\n", sze_sqr);
		free(map);
		if ((map = ft_createmap(sze_sqr)) == NULL)
			return ;
	}
	ft_putstr("\n");
	ft_putstr(MAG);
	for (int i = 0; i < sze_sqr; i++)
	{
		for (int j = 0; j < sze_sqr; j++)
		{
			printf("%c", map[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	ft_putstr(RESET);
}
