/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:11:44 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/14 11:28:13 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		s++;
		if (*s == c)
			temp = (char *)s;
	}
	return (temp);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strrchr("ABCABC", 'B')); // BC
	printf("%s\n", ft_strrchr("ABCABC", 'b')); // (null)
	printf("%s\n", ft_strrchr("string example", 'e')); // e
	return (0);
}
*/
