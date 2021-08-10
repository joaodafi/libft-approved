/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:47:19 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/10 11:54:57 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	dst_len;

	counter = 0;
	dst_len = ft_strlen (dst);
	if (size == 0)
		return (ft_strlen (src));
	if (size <= dst_len)
		return (size + ft_strlen (src));
	else
	{
		while (src[counter] && (dst_len + counter) < size)
			dst[ft_strlen (dst)] = src[counter++];
		if ((dst_len + counter) == size)
			dst[dst_len + counter - 1] = '\0';
		else
			dst[dst_len + counter] = '\0';
		return (dst_len + ft_strlen (src));
	}
}
