/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 09:12:34 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/04 12:44:39 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*pt;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	pt = malloc (sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!pt)
		return (NULL);
	ft_memmove (pt, s1, ft_strlen(s1));
	ft_memmove ((pt + ft_strlen(s1)), s2, ft_strlen(s2));
	pt[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (pt);
}
