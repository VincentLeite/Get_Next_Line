/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vleite <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:36:14 by vleite            #+#    #+#             */
/*   Updated: 2015/11/26 15:39:12 by vleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i = i + 1;
	}
	dst[i] = '\0';
	return (dst);
}