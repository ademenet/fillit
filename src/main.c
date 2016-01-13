/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:38:09 by ademenet          #+#    #+#             */
/*   Updated: 2016/01/13 17:57:19 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

int			main(int argc, char **argv)
{
	t_tetri	*tetris;
	int		pcs;
	int		cnt;

	if (argc > 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	pcs = 0;
	cnt = -1;
	tetris = ft_global_check(argv[1], &pcs);
	if (ft_check_last(argv[1], pcs) == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (tetris == NULL || !pcs || pcs > 26)
		write(1, "error\n", 6);
	else
	{
		ft_letter_assignation(tetris);
		ft_init(tetris, pcs);
	}
	return (0);
}
