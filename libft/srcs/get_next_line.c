/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnederlo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 13:23:08 by jnederlo          #+#    #+#             */
/*   Updated: 2017/03/15 16:48:17 by jnederlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		buf_check(char *buf)
{
	int				i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int		read_buf(char *buf, char *temp, char **line, const int fd)
{
	int			read_ret;
	char		*new_temp;

	while ((read_ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		new_temp = ft_strjoin(temp, buf);
		free(temp);
		temp = new_temp;
		if (buf_check(buf) >= 0)
		{
			temp = ft_linetrim(temp, '\n');
			*line = temp;
			buf = ft_linestrip(buf, '\n');
			return (1);
		}
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	if (read_ret == 0 && ft_strlen(temp) > 0)
	{
		*line = temp;
		ft_bzero(buf, BUFF_SIZE + 1);
		return (1);
	}
	return (read_ret);
}

int		nl_hunter(char *buf, char *temp, char **line, const int fd)
{
	int			read_ret;
	char		*new_temp;

	new_temp = ft_strjoin(temp, buf);
	free(temp);
	temp = new_temp;
	ft_bzero(buf, BUFF_SIZE + 1);
	read_ret = read_buf(buf, temp, line, fd);
	if (read_ret == 1)
		return (1);
	return (read_ret);
}

t_gnl	*gnl_list(t_gnl *head, int fd)
{
	t_gnl		*node;

	if (head == NULL)
	{
		if (!(node = (t_gnl *)malloc(sizeof(t_gnl))))
			return (0);
		node->fd = fd;
		ft_bzero(node->buf, BUFF_SIZE + 1);
		node->next = NULL;
		return (node);
	}
	while (fd != head->fd && head->next != NULL)
		head = head->next;
	if (fd == head->fd)
		return (head);
	if (!(node = (t_gnl *)malloc(sizeof(t_gnl))))
		return (0);
	node->fd = fd;
	ft_bzero(node->buf, BUFF_SIZE + 1);
	head->next = node;
	node->next = NULL;
	return (node);
}

int		get_next_line(const int fd, char **line)
{
	char			*temp;
	int				i;
	static t_gnl	*head;
	t_gnl			*node;

	if (!line)
		return (-1);
	if (head == NULL)
		head = gnl_list(head, fd);
	node = gnl_list(head, fd);
	if ((temp = ft_strnew(BUFF_SIZE)) == 0)
		return (-1);
	if ((i = buf_check(node->buf)) >= 0)
	{
		temp = ft_strncpy(temp, node->buf, i);
		*line = temp;
		*node->buf = *ft_linestrip(node->buf, '\n');
		return (1);
	}
	i = nl_hunter(node->buf, temp, line, fd);
	if (i == 1)
		return (1);
	else if (i == 0)
		return (0);
	return (-1);
}