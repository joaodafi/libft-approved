/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomiguel < jomiguel@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:18:55 by jomiguel          #+#    #+#             */
/*   Updated: 2021/09/07 15:45:01 by jomiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_memcpy (ptr, s, (ft_strlen(s) + 1));
	return (ptr);
}
