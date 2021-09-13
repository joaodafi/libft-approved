/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:15:19 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/10 12:12:24 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ctr;

	if (!s || !f)
		return ;
	ctr = 0;
	while (s[ctr])
	{
		f(ctr, s + ctr);
		ctr++;
	}
}
