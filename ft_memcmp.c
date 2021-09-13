/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:49:54 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/13 20:08:13 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	if (n == i)
		return (0);
	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while ((i + 1) < n && p1[i] == p2[i])
		i++;
	return (p1[i] - p2[i]);
}
