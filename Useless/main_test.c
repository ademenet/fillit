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
	//int bonus;

	pcs = 0;
	cnt = -1;
	//bonus = argc > 2 && argv[2][0] == 'b' ? 1 : 0;
	tetris = ft_global_check(argv[1], &pcs);
	if (tetris == NULL || !pcs || pcs > 26)
		printf("error\n");
	else
	{
		printf("Nombre de tetriminos : %d\n", pcs);
		ft_putstr(RESET);
		ft_letter_assignation(tetris);
		ft_init(tetris, pcs);
	}
	argc--;
	return (0);
}
//printf(" . = %d, # = %d, n = %d\n",dot_cnt, shrp_cnt, nwl_cnt);
//gcc -Wall -Werror -Wextra *.c ./test/main_test.c
//./a.out ./test/file_test

