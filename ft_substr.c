/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 08:20:07 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/13 21:22:25 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;
	size_t	ctr;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	pt = malloc (sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	ctr = 0;
	while (ctr < len)
	{
		pt[ctr] = *(s + start + ctr);
		ctr++;
	}
	pt[ctr] = '\0';
	return (pt);
}
