/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:06:01 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/09 13:32:52 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	if (!dst || !src)
		return (0);
	ft_strlen (src);
	if (!size)
		return (ft_strlen (src));
	counter = 0;
	if (size != 0)
	{
		while (src[counter] && (counter < size - 1))
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
	return (ft_strlen (src));
}
