/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 09:47:59 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/11 09:48:00 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//gcc -Wall -Werror -Wextra *.c ./test/main_test.c
//./a.out ./test/file_test
#include "fillit.h"
#include <string.h>

int ft_norme_vector(int x, int y, int x_ref, int y_ref)
{
	int xdiff;
	int ydiff;

	xdiff = x - x_ref;
	ydiff = y - y_ref;
	if()
		return (1);
	else
		return (0);
}

t_tetri		*ft_pattern_check(char *buf, t_tetri *tetri) //check the pattern contained in a block 
{
	int 	cur;
	int		shrp_cnt;
	int		x_ref;
	int		y_ref;

	cur = 0;
	shrp_cnt = 0;
	while (buf[cur] != '#')
		cur++;
	x_ref = cur % 5;
	y_ref = cur / 5;
	ft_p1(buf, tetri, x_ref,y_ref);
	ft_p2(buf, tetri, tetri->p1[1], tetri->p1[0]);
	ft_p3(buf, tetri, tetri->p2[1], tetri->p2[0]);
	if (tetri != NULL)
		return (tetri);
	else
		return (NULL);
}

t_tetri		*ft_block_check(char *buf, t_tetri *tetri) //check a block and the associated pattern and return a valid tetriminos 
{
	int		cur;
	int 	dot_cnt;
	int		shrp_cnt;
	int		nwl_cnt;

	cur = -1;
	dot_cnt = 0;
	shrp_cnt = 0;
	nwl_cnt = 0;
	while(buf[++cur] && (buf[cur] == '.' || buf[cur] == '#' ||
		buf[cur] == '\n'))
	{
		if (buf[cur] == '.')
			dot_cnt++;
		if (buf[cur] == '\n')
			nwl_cnt++;
		if (buf[cur] == '#')
			shrp_cnt++;
	}
	printf(" . = %d, # = %d, n = %d\n",dot_cnt, shrp_cnt, nwl_cnt);
	if (dot_cnt != 12 || shrp_cnt != 4 || nwl_cnt != 5)
		return (NULL);
	else
		return (ft_pattern_check(buf, tetri));
}

t_tetri		*ft_global_check(char *file_name) //check the file and return an array with all the tetriminos avaiable
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
			if(ft_block_check(buf, &(tetri_array[++cnt])) == NULL)
				return (NULL);
		}
	return (tetri_array);
}
