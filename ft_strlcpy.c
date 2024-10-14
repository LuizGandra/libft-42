/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:09:35 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/11 13:36:06 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO checar a da piscina e fazer melhorias
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		src_len;

	i = 0;
	src_len = ft_strlen(src);
	// TODO Check src_len e size values
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
// TODO CRIAR TESTES COM A STRING VAZIA:
/*
#include <stdio.h>
int	main(void)
{
	// TODO estudar variable-sized object:
	// char	dst[size] = "--------------------";
	// ----------------------------------------
	char	dst[20] = "--------------------";
	printf("ft_strlcpy(\"--------------------\", \"strlcpy example\", 20)\n");
	printf("	retorna %zu\n", ft_strlcpy(dst, "strlcpy example", 20));
	printf("	dst = %s\n", dst);
	printf("\n");
	char	dst_2[8] = "--------";
	printf("ft_strlcpy(\"--------\", \"testing strlcpy again\", 8)\n");
	printf("	retorna %zu\n", ft_strlcpy(dst_2, "testing strlcpy again", 8));
	printf("	dst = %s\n", dst_2);
	return (0);
}
*/
