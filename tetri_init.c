/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 15:23:41 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/09 15:23:42 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	**ft_init_chain()
{
	t_tetri	**tetri_chain;
	t_tetri *sqr;
	t_tetri	*ver_stick;
	t_tetri	*hor_stick;

	sqr = ft_create_sqr();
	sqr->next = ver_stick;
	ver_stick = ft_create_ver_stick();
	ver_stick->next = hor_stick;
	hor_stick = ft_create_ver_stick();

}