/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:20 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:28 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
void	striteri_tester(unsigned int i, char *str)
{
	*str = *str + i;
}

int	main(void)
{
	char	str[] = "striteri example";

	ft_striteri(str, &striteri_tester);
	printf("%s\n", str);
	return (0);
}
*/
