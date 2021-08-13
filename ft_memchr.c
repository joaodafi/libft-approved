/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:27:04 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/13 14:40:46 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)s)[counter] == (unsigned char)c)
			return ((void *)(s + counter));
		counter++;
	}
	return (0);
}
