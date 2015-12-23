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
#include "../inc/colors.h"

int	main(int argc, char **argv)
{
	t_tetri	*tetris;
	int	pcs;
	int	cnt;
	char pr[] = "c";

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
			ft_putstr(RED);
			printf("%d %d\n",tetris[cnt].p1[1], tetris[cnt].p1[0]);
			ft_putstr(CYN);
			printf("%d %d\n",tetris[cnt].p2[1], tetris[cnt].p2[0]);
			ft_putstr(YEL);
			printf("%d %d\n\n",tetris[cnt].p3[1], tetris[cnt].p3[0]);
		}
	}
	argc--;
	ft_putstr(UDL GRN);
	ft_putstr("Appuyez sur une touche pour quitter\n");
	ft_putstr(RESET);
	while (pr[0] == 'c')
		read(0, pr, 1);
	return(0);
}
//printf(" . = %d, # = %d, n = %d\n",dot_cnt, shrp_cnt, nwl_cnt);
//gcc -Wall -Werror -Wextra *.c ./test/main_test.c
//./a.out ./test/file_test

