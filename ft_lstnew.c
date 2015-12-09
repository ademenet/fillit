/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 07:30:43 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/04 07:30:48 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*ft_lstnew(const int *p1, const int *p2, const int *p3)
{
	t_tetri	*link;

	link = (t_tetri*)malloc(sizeof(t_tetri));
	if (link == NULL)
		return (NULL);
	if (p1 == NULL || p2 == NULL || p3 == NULL)
		return (NULL);
	else
	{
		link->p1 = p1;
		link->p2 = p2;
		link->p3 = p3;
		link->next = NULL;
	}
	return (link);
}
