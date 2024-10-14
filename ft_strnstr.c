/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:11:41 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/14 12:52:29 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;

	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if (!little[++i])
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	// strnstr example!
	printf("search for \"str\" "
			"in 20 bytes of \"strnstr example!\" returns \"%s\"\n",
			ft_strnstr("strnstr example!", "str", 20));
	// nstr example!
	printf("search for \"ns\" "
			"in 20 bytes of \"strnstr example\" returns \"%s\"\n",
			ft_strnstr("strnstr example!", "ns", 20));
	// (null)
	printf("search for \"ns\" "
			"in 3 bytes of \"strnstr example!\" returns %s\n",
			ft_strnstr("strnstr example!", "ns", 3));
	// strnstr example!
	printf("search for \"\" "
			"in \"strnstr example!\" returns \"%s\"\n",
			ft_strnstr("strnstr example!", "", 0));
	return (0);
}
*/
