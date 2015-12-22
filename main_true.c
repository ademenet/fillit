/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_true.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 11:50:45 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/22 15:12:59 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri	*tetris;
	int		pcs;
	int		bsq;
	char	**map;

	int		i = 0;

	pcs = 0;
	tetris = malloc(sizeof(t_tetri) * 26);
	tetris = ft_global_check(argv[1], &pcs);
	//if (tetris == NULL || !pcs || pcs > 26)
	//	printf("error\n"); //ATTENTION printf
	bsq = ft_bsq(pcs);
	puts("1");
	map = ft_createmap(bsq);
	puts("2");
	backtracking(tetris, map, bsq, 0, 0);
	while (map[i] != NULL)
	{
		printf("%s", map[i]);
		i++;
	}
	argc--;
	return (0);
}
