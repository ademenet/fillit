/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:38:09 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/21 16:18:08 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri	*tetris;
	int	pcs;
	int	cnt;

	pcs = 0;
	cnt = -1;
	tetris = ft_global_check(argv[1], &pcs);
	if (tetris == NULL || !pcs || pcs > 26)
		printf("error\n");
	else
	{
		printf("Nombre de tetriminos : %d\n", pcs);
		while (++cnt < pcs)
		{
			printf("%d %d\n",tetris[cnt].p1[1], tetris[cnt].p1[0]);
			printf("%d %d\n",tetris[cnt].p2[1], tetris[cnt].p2[0]);
			printf("%d %d\n\n",tetris[cnt].p3[1], tetris[cnt].p3[0]);
		}
	}
	argc--;
	return(0);
}
//printf(" . = %d, # = %d, n = %d\n",dot_cnt, shrp_cnt, nwl_cnt);
//gcc -Wall -Werror -Wextra *.c ./test/main_test.c
//./a.out ./test/file_test

