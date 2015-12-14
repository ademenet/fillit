/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   points_assignment.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:55:25 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/11 17:55:26 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_p1(char *buf, t_tetri *tetri, int x_ref, int y_ref)
{
	int	cur;
	int	shrp_cnt;

	if (tetri == NULL)
		return;
	cur = -1;
	shrp_cnt = 0;
	while(shrp_cnt < 2)
		if(buf[++cur] == '#')
			shrp_cnt++;
	tetri->p1[0] = cur / 5;
	tetri->p1[1] = cur % 5;
	if (ft_norme_vector(tetri->p1[1], tetri->p1[0], x_ref, y_ref) == 0)
		tetri = NULL;
}

void	ft_p2(char *buf, t_tetri *tetri, int x_ref, int y_ref)
{
	int	cur;
	int	shrp_cnt;

	if (tetri == NULL)
		return;
	cur = -1;
	shrp_cnt = 0;
	while(shrp_cnt < 3)
		if(buf[++cur] == '#')
			shrp_cnt++;
	tetri->p2[0] = cur / 5;
	tetri->p2[1] = cur % 5;
	if (ft_norme_vector(tetri->p2[1], tetri->p2[0], x_ref, y_ref) == 0)
		tetri = NULL;
}
void	ft_p3(char *buf, t_tetri *tetri, int x_ref, int y_ref)
{
	int	cur;
	int	shrp_cnt;

	if (tetri == NULL)
		return;
	cur = -1;
	shrp_cnt = 0;
	while(shrp_cnt < 4)
		if(buf[++cur] == '#')
			shrp_cnt++;
	tetri->p3[0] = cur / 5;
	tetri->p3[1] = cur % 5;
	if (ft_norme_vector(tetri->p3[1], tetri->p3[0], x_ref, y_ref) == 0)
		tetri = NULL;
}