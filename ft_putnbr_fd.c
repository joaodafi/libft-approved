/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:08:23 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/09 15:58:32 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			ft_putnbr_fd (-n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd ((n / 10), fd);
			ft_putnbr_fd ((n % 10), fd);
		}
		else
		{
			c = n + '0';
			ft_putchar_fd (c, fd);
		}
	}
}
