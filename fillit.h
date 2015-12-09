/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderragu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:16:42 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/09 14:16:47 by aderragu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_tetri
{
	int				p1[2];
	int				p2[2];
	int				p3[2];
	int				n;
	char			letter;
	struct s_tetri	*next;
}				t_tetri;

t_tetri		*ft_lstnew(const int *p1, const int *p2, const int *p3);
void		ft_lstadd(t_tetri **alst, t_tetri *new);
t_tetri		*ft_create_sqr();

#endif
