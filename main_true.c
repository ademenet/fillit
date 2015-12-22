

#include "./inc/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri	*tetris;
	int	pcs;

	pcs = 0;
	tetris = malloc(sizeif(t_tetri) * 26);
	tetris = ft_global_check(argv[1], &pcs);
	if (tetris == NULL || !pcs || pcs > 26)
		printf("error\n");

}
