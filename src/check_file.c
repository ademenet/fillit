/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 11:17:22 by ademenet          #+#    #+#             */
/*   Updated: 2016/01/04 12:22:32 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"
#include <stdio.h>

int			ft_check_last(char *file_name, int pcs)
{
	char	*buf;
	int		fd;
	int		n;

	if ((buf = (char*)malloc(sizeof(char) * (BUFF * pcs + 1))) == NULL)
		return (0);
	if ((fd = open(file_name, O_RDONLY, 0555)) == -1)
		return (0);
	buf[BUFF * pcs + 1] = '\0';
	n = -1;
	while (read(fd, buf, BUFF * pcs))
	{
		if (buf[BUFF * pcs - 1] == '\0' && buf[BUFF * pcs - 2] == '\n' &&
			(buf[BUFF * pcs - 3] == '.' || buf[BUFF * pcs - 3] == '#'))
			return (1);
	}
	free(buf);
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


int			ft_line_check(char *buf)
{
	int		cur;
	int		shrp_cnt;
	int 	line;

	line = 0;
	cur = 0;
	shrp_cnt = 0;
	while (buf[cur])
	{
		if (cur % 5 == 4 && buf[cur] != '\n')
			return (0);
		cur++;
	}
	cur = 0;
	while (cur < 5)
	{
		shrp_cnt = buf[cur] == '#' ? shrp_cnt + 1 : shrp_cnt;
		cur++;
	}
	if (shrp_cnt > 0 && shrp_cnt < 4 && !(buf[cur + 1] == '#' || buf[cur + 2] == '#' || buf[cur + 3] == '#' || buf[cur + 4] == '#'))
		return (0);
	return (1);
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
	while (buf[++cur] && (buf[cur] == '.' || buf[cur] == '#' || buf[cur] == '\n'))
	{
		if (buf[cur] == '.')
			dot_cnt++;
		else if (buf[cur] == '\n')
			nwl_cnt++;
		else if (buf[cur] == '#')
			shrp_cnt++;
	}
	if (ft_line_check(buf) == 0)
		return (NULL);
	if (!(dot_cnt == 12 && shrp_cnt == 4 && buf[19] == '\n') && (!(nwl_cnt == 5) || !(nwl_cnt == 4 && buf[20] == '\0')))
		return (NULL);
	return (ft_pattern_check(buf, tetri));
}

t_tetri		*ft_global_check(char *file_name, int *pcs)
{
	char	*buf;
	t_tetri	*tetri_array;
	int		fd;
	int		cnt;

	if ((tetri_array = malloc(sizeof(t_tetri) * 27)) == NULL)
		return (NULL);
	cnt = -1;
	if ((buf = malloc(sizeof(char) * BUFF + 1)) == NULL)
		return (NULL);
	if ((fd = open(file_name, O_RDONLY, 0555)) == -1)
		return (NULL);
	ft_memset(buf, '\0', BUFF + 1);
	while (read(fd, buf, BUFF))
	{
		if (ft_block_check(buf, &(tetri_array[++cnt])) == NULL)
			return (NULL);
		*pcs = *pcs + 1;
	}
	free(buf);
	if ((close(fd)) == -1)
		return (NULL);
	tetri_array[*pcs].letter = '|';
	return (tetri_array);
}
