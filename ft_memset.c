/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:03:35 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/19 18:57:03 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;
	size_t	count;

	str = (char *)ptr;
	count = 0;
	while (count < n)
	{
		str[count] = (unsigned char)c;
		count++;
	}
	return (ptr);
}
