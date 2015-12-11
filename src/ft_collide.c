/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 18:58:44 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/10 19:01:56 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_collide(int x, int y, char **map)
{
	if (map[y][x] == '.')
		return (1);
	return (0);
}
