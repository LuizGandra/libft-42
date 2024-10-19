/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:06 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/19 17:49:18 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	check_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static unsigned int	get_numlen(int n)
{
	unsigned int	len;

	if (!n)
		return (1);
	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*parse_number(char *str, long long n)
{
	if (n > 9)
		parse_number(str - 1, n / 10);
	*str = (n % 10) + '0';
	return (str);
}

#include <stdio.h>
char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	is_negative;
	long long		long_n;

	len = get_numlen(n);
	is_negative = check_sign(n);
	str = malloc(len + is_negative + 1);
	if (!str)
		return (NULL);
	str[len + is_negative] = '\0';
	long_n = n;
	if (is_negative)
	{
		long_n = -long_n;
		*str = '-';
		str++;
		return (parse_number(&str[len - 1], long_n) - len);
	}
	else
	{
		return (parse_number(&str[len - 1], long_n) - len + 1);
	}
}

/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(42));
	return (0);
}
*/
