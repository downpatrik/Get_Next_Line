/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:52:00 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/16 23:34:40 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char		*str[1024];
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				size;

	if (fd < 0 || line)
		return (-1);
	while ((size = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[size] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		tmp = ft_strjoin(str[fd], buf);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (size < 0)
		return (-1);
	else if (size == 0)
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	int		fd;
	char	*line;

	if (ac == 1)
		ft_putendl("file missing");
	else if ((fd = open(av[1], O_RDONLY)) < 0)
		return (-1);
	while (get_next_line(fd, &line))
		ft_putendl(line);
	return (0);
}
