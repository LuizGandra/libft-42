/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:11:37 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/14 11:51:12 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("\"abcde\" and \"abcdz\" with n = 5 returns %i\n",
			ft_strncmp("abcde", "abcdz", 5)); // -21
	printf("\"abcde\" and \"abcdz\" with n = 3 returns %i\n",
			ft_strncmp("abcde", "abcdz", 3)); // 0
	printf("\"abcde\" and \"abcde\" with n = 5 returns %i\n",
			ft_strncmp("abcde", "abcde", 5)); // 0
	printf("\"edcba\" and \"abcde\" with n = 100 returns %i\n",
			ft_strncmp("edcba", "abcde", 100)); // 4
	return (0);
}
*/
