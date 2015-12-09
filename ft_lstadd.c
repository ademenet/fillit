/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 07:47:54 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/04 07:47:56 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lstadd(t_tetri **tlst, t_tetri *new)
{
	if (*tlst && new)
	{
		while(*tlst->next != NULL)
			*tlst = *tlst->next;
		*tlst->new;
		new->next = NULL;
	}
}
