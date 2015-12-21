/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 09:47:59 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/21 16:09:27 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int			ft_norme_vector(int x, char *buf)
{
	if (x > 5 && x < 15)
	{
		if (buf[x + 1] == '#' || buf[x + 5] == '#' || buf[x - 1] == '#' ||
		buf[x - 5] == '#')
			return (1);
	}
	if (x == 0)
	{
		if (buf[x + 1] == '#' || buf[x + 5] == '#')
			return (1);
	}
	if (x > 0 && x <= 5)
	{
		if (buf[x + 1] == '#' || buf[x + 5] == '#' || buf[x - 1] == '#')
			return (1);
	}
	if (x > 15 && x < 21)
	{
		if (buf[x + 1] == '#' || buf[x - 1] == '#' || buf[x - 5] == '#')
			return (1);
	}
	return (0);
}

t_tetri		*ft_pattern_check(char *buf, t_tetri *tetri)
{
	int		cur;
	int		shrp_cnt;
	int		x_ref;
	int		y_ref;

	cur = 0;
	shrp_cnt = 0;
	while (buf[cur] != '#')
		cur++;
	x_ref = cur % 5;
	y_ref = cur / 5;
	if (ft_p1(buf, tetri, x_ref, y_ref))
		if (ft_p2(buf, tetri, x_ref, y_ref))
			if (ft_p3(buf, tetri, x_ref, y_ref))
				return (tetri);
	return (NULL);
}

t_tetri		*ft_block_check(char *buf, t_tetri *tetri)
{
	int		cur;
	int		dot_cnt;
	int		shrp_cnt;
	int		nwl_cnt;

	cur = -1;
	dot_cnt = 0;
	shrp_cnt = 0;
	nwl_cnt = 0;
	while (buf[++cur] && (buf[cur] == '.' || buf[cur] == '#' ||
		buf[cur] == '\n'))
	{
		if (buf[cur] == '.')
			dot_cnt++;
		else if (buf[cur] == '\n')
			nwl_cnt++;
		else if (buf[cur] == '#')
			shrp_cnt++;
	}
	if (dot_cnt != 12 || shrp_cnt != 4 || nwl_cnt != 5 || buf[0] == '.' ||
		buf[0] == '#' || buf[20] != '\n')
		return (NULL);
	else
		return (ft_pattern_check(buf, tetri));
}

t_tetri		*ft_global_check(char *file_name, int *pcs)
{
	char	*buf;
	t_tetri	*tetri_array;
	int		fd;
	int		cnt;

	if ((tetri_array = malloc(sizeof(t_tetri) * 26)) == NULL)
		return (NULL);
	cnt = -1;
	buf = malloc(sizeof(char));
	fd = open(file_name, O_RDONLY, 0555);
	while (read(fd, buf, BUFF))
	{
		if (ft_block_check(buf, &(tetri_array[++cnt])) == NULL)
			return (NULL);
		*pcs = *pcs + 1;
	}
	return (tetri_array);
}
