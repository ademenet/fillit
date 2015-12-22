/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_true.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 11:50:45 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/22 11:59:54 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri	*tetris;
	int		pcs;
	int		bsq;
	char	**map;

	pcs = 0;
	tetris = malloc(sizeof(t_tetri) * 26);
	tetris = ft_global_check(argv[1], &pcs);
	//if (tetris == NULL || !pcs || pcs > 26)
	//	printf("error\n"); //ATTENTION printf
	bsq = ft_bsq(pcs);
	map = ft_createmap(bsq);
	backtracking(tetris, map, bsq, 0, 0);
	while (map--)
	{
		printf("%s", *map);
	}
	argc--;
	return (0);
}
