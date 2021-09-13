/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 15:22:50 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/13 20:42:44 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c1;
	size_t	c2;

	if (big == little)
	{
		if (len >= ft_strlen(little))
			return ((char *)big);
		else
			return (0);
	}
	c1 = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[c1] && c1 < len)
	{
		c2 = 0;
		while (big[c1 + c2] == little[c2] && ((c1 + 1) + c2) < len)
			c2++;
		if (little[c2] == '\0')
			return ((char *)big + c1);
		c1++;
	}
	return (0);
}
