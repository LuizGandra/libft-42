/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:16:17 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/16 18:44:15 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	m_size;
	void	*temp;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb > ((size_t) - 1) / size)
		return (NULL);
	m_size = nmemb * size;
	temp = malloc(m_size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, m_size);
	return (temp);
}

/*
int	main(void)
{
	// TODO write test
	return (0);
}
*/
