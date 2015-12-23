/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:16:42 by aderragu          #+#    #+#             */
/*   Updated: 2015/12/22 16:29:52 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF 21
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef	struct	s_tetri
{
	int			p1[2];
	int			p2[2];
	int			p3[2];
}				t_tetri;

t_tetri			*ft_global_check(char *file_name, int *pcs);
size_t			ft_strlen(const char *s);
void			ft_putstr(char const *s);
float			ft_sqrt(int nb);
int				ft_bsq(int nb);
int     		ft_round(float nb);
t_tetri			*ft_block_check(char *buf, t_tetri *tetri);
t_tetri			*ft_pattern_check(char *buf, t_tetri *tetri);
int				ft_norme_vector(int x, int y, int x_ref, int y_ref);
int				ft_p1(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				ft_p2(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				ft_p3(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				backtracking(t_tetri *tetris, char **map, int bsq, int y, int x);
int				ft_check(int *p0, int bsq, char **map, t_tetri tetris);
int 			ft_collide(int x, int y, char **map);
char			*ft_strsetnew(char c, int size);
char			**ft_createmap(int bsq);
void			ft_printmap(char **map, int p0[2], t_tetri tetris, int i);
int				ft_trace(int x, int y, int bsq);

#endif
