/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilberm <tsilberm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/23 18:17:19 by tsilberm          #+#    #+#             */
/*   Updated: 2015/07/24 23:13:48 by tsilberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_read_normal(int fd, char *buffer)
{
	int read_i;

	while ((read_i = read(fd, buffer, BUFFER_SIZE)))
	{
		buffer[read_i] = '\0';
		ft_putstr(buffer);
	}
}

void	ft_error(char *prog_name, char *arg)
{
	if (errno == EACCES)
	{
		ft_putstr(prog_name);
		ft_putstr(": ");
		ft_putstr(arg);
		ft_putstr(": Permission Denied\n");
	}
	else if (errno == EISDIR)
	{
		ft_putstr(prog_name);
		ft_putstr(": ");
		ft_putstr(arg);
		ft_putstr(": Is a directory\n");
	}
	else
	{
		ft_putstr(prog_name);
		ft_putstr(": ");
		ft_putstr(arg);
		ft_putstr(": No such file or directory\n");
	}
}

void	ft_display_file(char *prog_name, char *arg)
{
	int		fd;
	char	buffer[BUFFER_SIZE + 1];

	errno = 0;
	fd = open (arg, O_RDWR);
	if (fd == -1)
	{
		if (arg[0] == '-' && arg[1] == '\0')
			ft_cat();
		else
			ft_error(prog_name, arg);
	}
	else
		ft_read_normal(fd, buffer);
	if (close(fd) == -1)
		ft_putstr("");
}

void	ft_cat(void)
{
	int		read_i;
	char	buffer[BUFFER_SIZE + 1];

	read_i = 0;
	while ((read_i = read(0, buffer, BUFFER_SIZE)))
	{
		buffer[read_i] = '\0';
		ft_putstr(buffer);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
		ft_cat();
	else
	{
		while (i < argc)
		{
			ft_display_file (argv[0], argv[i]);
			i++;
		}
	}
	return (0);
}
