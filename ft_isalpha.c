/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:13:51 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/15 14:53:42 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
int	main(void)
{
	printf("c retorna %i\n", ft_isalpha('c')); // 1
	printf("H retorna %i\n", ft_isalpha('H')); // 1
	printf("4 retorna %i\n", ft_isalpha('4')); // 0
	printf("_ retorna %i\n", ft_isalpha('_')); // 0
	printf("Y retorna %i\n", ft_isalpha('Y')); // 1
	return (0);
}
*/
