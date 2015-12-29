/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <ademenet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:16:42 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/29 17:47:23 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF 21
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

t_tetri			*ft_global_check(char *file_name, int *pcs);
size_t			ft_strlen(const char *s);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
void			*ft_memset(void *b, int c, size_t len);
float			ft_sqrt(int nb);
int				ft_abs(int nbr);
int				ft_bsq(int nb);
int				ft_round(float nb);
t_tetri			*ft_block_check(char *buf, t_tetri *tetri);
t_tetri			*ft_pattern_check(char *buf, t_tetri *tetri);
int				ft_norme_vector(int x, int y, int x_ref, int y_ref);
int				ft_p1(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				ft_p2(char *buf, t_tetri *tetri, int x_ref, int y_ref);
int				ft_p3(char *buf, t_tetri *tetri, int x_ref, int y_ref);
char			*ft_strsetnew(char c, int size);
char			**ft_createmap(int bsq);
void			ft_init(t_tetri *tetris, int pcs);
void			ft_letter_assignation(t_tetri *tetris);
int				ft_check_last(char *file_name, int pcs);
void			ft_display(char **map, int sze_sqr);

#endif
