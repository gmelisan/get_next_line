/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelisan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:48:23 by gmelisan          #+#    #+#             */
/*   Updated: 2018/12/18 11:59:17 by gmelisan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define BUFF_SIZE 1000

typedef struct	s_gnlbuf
{
	int			fd;
	char		buf[BUFF_SIZE];
}				t_gnlbuf;

int				get_next_line(const int fd, char **line);

#endif
