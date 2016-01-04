/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:16:42 by ademenet          #+#    #+#             */
/*   Updated: 2016/01/04 18:20:30 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF 524
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef	struct	s_tetri
{
	int			p1[2];
	int			p2[2];
	int			p3[2];
	char		letter;
}				t_tetri;

/*
**				lib
*/
int				ft_abs(int nbr);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char const *s);
int				ft_round(float nb);
float			ft_sqrt(int nb);
size_t			ft_strlen(const char *s);
char			*ft_strncpy(char *dst, const char *src, size_t n);
char			*ft_strsetnew(char c, int size);

/*
**				check_file.c
*/
t_tetri			*ft_global_check(char *file_name, int *pcs);
t_tetri			*ft_file_check(char *buf, t_tetri *tetri_array);
t_tetri			*ft_block_check(char *buf, t_tetri *tetri);
t_tetri			*ft_pattern_check(char *buf, t_tetri *tetri);

/*
**				points_assignment.c
*/
int				ft_norme_vector(int x, int y, int x_ref, int y_ref);
int				ft_p1(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				ft_p2(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				ft_p3(char *buf, t_tetri *tetri, int x_ref, int y_ref);
void			ft_letter_assignation(t_tetri *tetris);

/*
**				initfile.c
*/
void			ft_init(t_tetri *tetris, int pcs);

/*
**				createmap.c
*/
int				ft_bsq(int nb);
char			**ft_createmap(int bsq);

/*
**				display.c
*/
void			ft_display(char **map, int sze_sqr);
#endif
