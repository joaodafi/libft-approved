/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:43:10 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/04 14:23:00 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t how_many)
{
	int			counter;
	char		*destiny;
	const char	*source;

	if ((dest == src) || (how_many == 0))
		return (dest);
	counter = 0;
	destiny = (char *)dest;
	source = (unsigned char *)src;
	while (counter < how_many)
	{
		destiny[counter] = source[counter];
		counter++;
	}
	return (dest);
}
