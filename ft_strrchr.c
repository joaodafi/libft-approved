/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:16:21 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/13 11:32:00 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (counter <= ft_strlen(s))
	{
		if (s[ft_strlen(s) - counter] == c)
			return ((char *)s + (ft_strlen(s) - counter));
		counter++;
	}
	return (0);
}
