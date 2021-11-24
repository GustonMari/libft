/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:59:24 by gmary             #+#    #+#             */
/*   Updated: 2021/11/23 18:09:22 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = 0;
	while (s2[i])
		i++;
	while (i != 0)
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i--;
	}
	return (0);
}
