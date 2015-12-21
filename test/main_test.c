/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:38:09 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/11 10:38:10 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int	main(int argc, char **argv)
{
	t_tetri	*tetris;
	int	pcs;

	pcs = 0;
	tetris = malloc(sizeof(t_tetri) * 26);
	tetris = ft_global_check(argv[1], &pcs);
	if (tetris == NULL || !pcs || pcs > 26)
		printf("error\n");
	else
	{
		printf("Nombre de tetriminos : %d\n", pcs);
		printf("%d %d\n",tetris[0].p1[1], tetris[0].p1[0]);
		printf("%d %d\n",tetris[0].p2[1], tetris[0].p2[0]);
		printf("%d %d\n\n",tetris[0].p3[1], tetris[0].p3[0]);

		printf("%d %d\n",tetris[1].p1[1], tetris[1].p1[0]);
		printf("%d %d\n",tetris[1].p2[1], tetris[1].p2[0]);
		printf("%d %d\n\n",tetris[1].p3[1], tetris[1].p3[0]);

		printf("%d %d\n",tetris[2].p1[1], tetris[2].p1[0]);
		printf("%d %d\n",tetris[2].p2[1], tetris[2].p2[0]);
		printf("%d %d\n\n",tetris[2].p3[1], tetris[2].p3[0]);

		printf("%d %d\n",tetris[3].p1[1], tetris[3].p1[0]);
		printf("%d %d\n",tetris[3].p2[1], tetris[3].p2[0]);
		printf("%d %d\n\n",tetris[3].p3[1], tetris[3].p3[0]);

		printf("%d %d\n",tetris[4].p1[1], tetris[4].p1[0]);
		printf("%d %d\n",tetris[4].p2[1], tetris[4].p2[0]);
		printf("%d %d\n\n",tetris[4].p3[1], tetris[4].p3[0]);
	}
	argc--;
	return(0);
}
//printf(" . = %d, # = %d, n = %d\n",dot_cnt, shrp_cnt, nwl_cnt);
//gcc -Wall -Werror -Wextra *.c ./test/main_test.c
//./a.out ./test/file_test