/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:44:22 by jomiguel          #+#    #+#             */
/*   Updated: 2021/08/14 14:25:32 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ct;
	int	nbr;
	int	signal;

	ct = 0;
	nbr = 0;
	signal = 1;
	while (nptr[ct] && (nptr[ct] == 32 || (nptr[ct] <= 14 && nptr[ct] >= 9)))
		ct++;
	if (nptr[ct] && nptr[ct] == '-')
	{
		signal = -1;
		ct++;
	}
	else if (nptr[ct] == '+')
		ct++;
	while (nptr[ct] && ft_isdigit(nptr[ct]))
		nbr = (nbr * 10) + (nptr[ct++] - '0');
	return (nbr * signal);
}
