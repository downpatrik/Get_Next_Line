/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:06:49 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/24 22:56:50 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <sys/types.h>
# include <fcntl.h>
# include <fcntl.h>
# define BUFF_SIZE 8

int		get_next_line(const int fd, char **line);
int		write_next_line(const int fd, char **line, char **str);

#endif
