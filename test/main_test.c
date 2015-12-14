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
	tetris = ft_global_check(argv[1]);
	if (tetris == NULL)
		printf("erreur\n");
	else
	{
		printf("%d %d\n",tetris[0].p1[1], tetris[0].p1[0]);
		printf("%d %d\n",tetris[0].p2[1], tetris[0].p2[0]);
		printf("%d %d\n\n",tetris[0].p3[1], tetris[0].p3[0]);

		printf("%d %d\n",tetris[1].p1[1], tetris[0].p1[0]);
		printf("%d %d\n",tetris[1].p2[1], tetris[0].p2[0]);
		printf("%d %d\n\n",tetris[1].p3[0], tetris[1].p3[0]);

		printf("%d %d\n",tetris[2].p1[1], tetris[2].p1[0]);
		printf("%d %d\n",tetris[2].p2[1], tetris[2].p2[0]);
		printf("%d %d\n",tetris[2].p3[1], tetris[2].p3[0]);
	}
	argc--;
	return(0);
}
