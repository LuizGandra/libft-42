/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:49 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/21 16:15:45 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	write_number(long long n, int fd)
{
	char	c;

	if (n > 9)
		write_number(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		long_n = -long_n;
		write(fd, "-", 1);
	}
	write_number(long_n, fd);
}

/*
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_WRONLY);
	ft_putnbr_fd(-2147483648, fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(2147483647, fd);
	close(fd);
	return (0);
}
*/
