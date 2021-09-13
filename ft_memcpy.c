/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:43:10 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/13 16:05:22 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destiny;
	const char	*source;

	if ((dest == src) || (n == 0))
		return (dest);
	if (!src || (!dest && !src))
		return (NULL);
	destiny = (char *)dest;
	source = (const char *)src;
	while (n-- && source)
		*destiny++ = *source++;
	return (dest);
}
