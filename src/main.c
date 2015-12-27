/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:38:09 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/27 09:48:50 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int			main(int argc, char **argv)
{
	t_tetri	*tetris;
	int		pcs;
	int		cnt;

	pcs = 0;
	cnt = -1;
	tetris = ft_global_check(argv[1], &pcs);
	if (tetris == NULL || !pcs || pcs > 26)
		write(1, "error\n", 6);
	else
	{
		ft_letter_assignation(tetris);
		ft_init(tetris, pcs);
	}
	argc--;
	return (0);
}
