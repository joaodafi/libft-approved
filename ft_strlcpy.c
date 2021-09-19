/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:06:01 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/19 19:07:25 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (i < destsize - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
