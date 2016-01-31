/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vleite <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 09:29:54 by vleite            #+#    #+#             */
/*   Updated: 2016/01/26 18:28:52 by vleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# define EOF (-1)
# define BUFF_SIZE 8

int						get_next_line(int const fd, char **line);

typedef struct			s_listgnl
{
	int					fd;
	int					nbl;
	int					line;
	char				*tab;
	struct s_listgnl	*next;
}						t_listgnl;

#endif
