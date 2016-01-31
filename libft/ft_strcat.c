/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vleite <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 15:00:24 by vleite            #+#    #+#             */
/*   Updated: 2015/11/26 15:36:01 by vleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s1[i] != '\0')
	{
		i = i + 1;
	}
	while (s2[n] != '\0')
	{
		s1[i] = s2[n];
		i = i + 1;
		n = n + 1;
	}
	s1[i] = '\0';
	return (s1);
}