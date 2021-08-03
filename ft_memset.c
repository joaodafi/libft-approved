/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:03:35 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/03 11:26:54 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_menset(void *s, int c, size_t n)
{
	size_t	counter;
	unsigned char	*holder;

	counter = 0;
	holder = (unsigned char *)s;
	while (counter < n)
	{
		holder[counter] = c;
		counter++;
	}
	return (s);
}
