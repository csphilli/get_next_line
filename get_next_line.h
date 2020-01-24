/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cphillip <cphillip@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:57:22 by cphillip          #+#    #+#             */
/*   Updated: 2019/12/05 09:10:47 by cphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10000
# define FD_SIZE 8192

# include <stdlib.h>
# include <sys/types.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);
int		clean_line(char **fdt, char **line);

#endif
