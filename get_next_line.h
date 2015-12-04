/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgallern <lgallern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/02 19:15:26 by lgallern          #+#    #+#             */
/*   Updated: 2015/02/02 13:16:45 by lgallern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include "libft/libft.h"

# define BUF_SIZE ((unsigned int)8)

int					get_next_line(int const fd, char **line);

typedef struct		s_buffer
{
	int				fd;
	char			str[(unsigned int)BUF_SIZE + 1];
	size_t			cursor;
	ssize_t			size;
}					t_buffer;

#endif
