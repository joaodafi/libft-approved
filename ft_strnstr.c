/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 15:22:50 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/19 18:41:04 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *ptr, size_t n)
{
	size_t	ptrlen;

	ptrlen = ft_strlen(ptr);
	if (!ptrlen)
		return ((char *)str);
	while (*str && ptrlen <= n--)
	{
		if (ft_strncmp(str, ptr, ptrlen) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
