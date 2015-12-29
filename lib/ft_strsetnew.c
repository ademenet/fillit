/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsetnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:50:34 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/29 17:55:34 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fillit.h"

char	*ft_strsetnew(char c, int size)
{
	char	*str;
	int		i;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (size--)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
