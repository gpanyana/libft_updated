/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:26:31 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/07 13:13:06 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		find_newline(char **str, char **line, int fd, int retval)
{
	char	*temp;
	int		len;

	len = 0;
	while (str[fd][len] != '\n' && str[fd][len] != '\0')
		len++;
	if (str[fd][len] == '\n')
	{
		*line = ft_strsub(str[fd], 0, len);
		temp = ft_strdup(str[fd] + len + 1);
		free(str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][len] == '\0')
	{
		if (retval == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*t[1024];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			new;

	new = 0;
	if (fd < 0 || line == NULL)
		return (-1);
	while ((new = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[new] = '\0';
		if (t[fd] == NULL)
			t[fd] = ft_strnew(1);
		tmp = ft_strjoin(t[fd], buf);
		free(t[fd]);
		t[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (new < 0)
		return (-1);
	else if (new == 0 && (t[fd] == NULL || t[fd][0] == '\0'))
		return (0);
	return (find_newline(t, line, fd, new));
}
