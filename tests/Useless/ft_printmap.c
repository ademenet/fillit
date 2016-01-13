/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:40:40 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/23 16:10:05 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

void	ft_printmap(char **map, int pos, t_tetri tetris, int i)
{
	map[p0[0]][p0[1]] = i + 'A';
	map[p0[0] + tetris.p1[0]][p0[1] + tetris.p1[1]] = i + 'A';
	map[p0[0] + tetris.p2[0]][p0[1] + tetris.p2[1]] = i + 'A';
	map[p0[0] + tetris.p3[0]][p0[1] + tetris.p3[1]] = i + 'A';
}
