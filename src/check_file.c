/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 11:17:22 by ademenet          #+#    #+#             */
/*   Updated: 2016/01/04 19:01:57 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

#include <stdio.h>

/*int			ft_check_last(char *file_name, int pcs)
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
}*/

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

/*t_tetri		*ft_block_check(char *buf, t_tetri *tetri)
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
	if (!(dot_cnt == 12 && shrp_cnt == 4 && buf[19] == '\n') &&
			(!(nwl_cnt == 5) || !(nwl_cnt == 4 && buf[20] == '\0')))
		return (NULL);
	return (ft_pattern_check(buf, tetri));
}*/

t_tetri		*ft_block_check(char *buf, t_tetri *tetri_array)
{
	int		i;
	int		dot_cnt;
	int		shp_cnt;

	i = 0;
	dot_cnt = 0;
	shp_cnt = 0;
	while (buf[i] != '\0')
	{
		dot_cnt = buf[i] == '.' ? dot_cnt++ : dot_cnt; 
		shp_cnt = buf[i] == '#' ? shp_cnt++ : shp_cnt;
		if (i % 5 == 1)
		{
			if (buf[i] != '\n')
				return (NULL);
		}
	}
	if (dot_cnt != 12 || shp_cnt != 4)
		return (NULL);
	return (ft_pattern_check(buf, tetri_array));
}

t_tetri		*ft_file_check(char *buf, t_tetri *tetri_array)
{
	printf("Je rentre dans file_check");
	if (buf[ft_strlen(buf)] != '\0' || buf[ft_strlen(buf) - 1] != '\n' ||
			!(buf[ft_strlen(buf) - 3] == '.' || buf[ft_strlen(buf) - 3] == '#'))
		return (NULL);
	return (ft_block_check(buf, tetri_array));
}

t_tetri		*ft_global_check(char *file_name, int *pcs)
{
	char	tmp[21];
	char	*buf;
	t_tetri	*tetri_array;
	int		blc_cnt;
	int		fd;

	if ((tetri_array = malloc(sizeof(t_tetri) * 27)) == NULL)
		return (NULL);
	if ((buf = malloc(sizeof(char) * BUFF)) == NULL)
		return (NULL);
	if ((fd = open(file_name, O_RDONLY, 0555)) == -1)
		return (NULL);
	ft_memset(buf, '\0', BUFF + 1);
	read(fd, buf, BUFF);
	blc_cnt = (ft_strlen(buf) + 1) / 21;
	while (blc_cnt--)
	{
		ft_strncpy(tmp, buf, 21);
		if (ft_file_check(tmp, tetri_array) == NULL)
			return (NULL);
		buf = buf + 21;
	}
	*pcs = *pcs + 1;
	free(buf);
	if ((close(fd)) == -1)
		return (NULL);
	tetri_array[*pcs].letter = '|';
	return (tetri_array);
}
