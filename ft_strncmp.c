/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:58:20 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/18 21:50:04 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cntr;

	cntr = 0;
	if (n == cntr)
		return (0);
	while ((cntr + 1) < n && s1[cntr] == s2[cntr] && s1[cntr] && s2[cntr])
		cntr++;
	return ((unsigned char)s1[cntr] - (unsigned char)s2[cntr]);
}
