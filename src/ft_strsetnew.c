/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsetnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademenet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 10:50:34 by ademenet          #+#    #+#             */
/*   Updated: 2015/12/11 18:48:53 by ademenet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsetnew(char c, int size)
{
	char	*str;
	int		i;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (!str)
		return ((void*)0);
	i = 0;
	while (size--)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
