/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/26 10:59:21 by tvisenti          #+#    #+#             */
/*   Updated: 2015/12/28 11:36:01 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

void	ft_display(char **map, int sze_sqr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < sze_sqr)
	{
		while (j < sze_sqr)
		{
			ft_putchar(map[i][j]);
			write(1, " ", 1);
			j++;
		}
		i++;
		j = 0;
		write(1, "\n", 1);
	}
}
