/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:16:37 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/26 12:28:12 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putchar_fd('X', fd);
	close(fd);
	return (0);
}
*/
