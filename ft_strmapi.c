/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:01:30 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/10 12:12:44 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	ctr;
	char			*pt;

	if (!s || (!s && !f))
		return (ft_strdup (""));
	else if (!f)
		return (ft_strdup (s));
	pt = ft_strdup (s);
	if (!pt)
		return (NULL);
	ctr = 0;
	while (s[ctr])
	{
		pt[ctr] = (*f)(ctr, pt[ctr]);
		ctr++;
	}
	return (pt);
}
