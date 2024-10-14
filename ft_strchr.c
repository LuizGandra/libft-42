/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:04:24 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/14 11:20:57 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strchr("ABC", 'B')); // BC
	printf("%s\n", ft_strchr("ABC", 'Z')); // (null)
	printf("%s\n", ft_strchr("ABC", 'a')); // (null)
	printf("%s\n", ft_strchr("ABCABC", 'C')); // CABC
	return (0);
}
*/
